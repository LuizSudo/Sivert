#include "CLIManager.hpp"
#include "Visitor.hpp"
#include "jit.hpp"
#include "ObjectEmitter.hpp"
#include "grammar/Visitor.hpp"

#include <llvm/Support/TargetSelect.h>

int run(const SivertLang::CLIManager &cli, SivertLang::Visitor &visitor)
{
    auto jit = SivertLang::JIT::create(visitor.llvm_module, visitor.llvm_context);

    auto entry = jit->lookup<int()>("main");
    if (!entry)
    {
        llvm::errs() << entry.takeError();
        return 1;
    }

    return entry.get()();
}

int compile(const SivertLang::CLIManager &cli, SivertLang::Visitor &visitor)
{
    std::string error;
    SivertLang::ObjectEmitter::emit(visitor.llvm_module, cli.getOptionValue("-o", "output.o"), error);

    if (!error.empty())
    {
        llvm::errs() << error;
        return 1;
    }

    return 0;
}

int main(int argc, char **argv)
{
    SivertLang::CLIManager cli(argc, argv);

    if (argc < 2 || cli.hasOption("--help") || cli.hasOption("-h"))
    {
        std::cerr << "Usage: compiler <file> [--help,-h] [--print-llvm] [--compile,-c [-o <path (default: output.o)>]]" << std::endl;
        return 1;
    }

    llvm::InitializeAllTargetInfos();
    llvm::InitializeAllTargets();
    llvm::InitializeAllTargetMCs();
    llvm::InitializeAllAsmParsers();
    llvm::InitializeAllAsmPrinters();
    
    SivertLang::Visitor visitor(argv[1]);
    visitor.start();

    if (cli.hasOption("--print-llvm"))
    {
        visitor.llvm_module->print(llvm::outs(), nullptr);
        std::cout << std::endl;
    }

    if (cli.hasOption("--compile") || cli.hasOption("-c"))
    {
        compile(cli, visitor);
    }
    else
    {
        return run(cli, visitor);
    }

    return 0;
}