#include "Helper.hpp"

namespace SivertLang
{
class ObjectEmitter
{
public:
    static void emit(const std::unique_ptr<llvm::Module> &module, const std::string &filename, std::string &error)
    {
        auto targetTriple = llvm::sys::getDefaultTargetTriple();

        auto target = llvm::TargetRegistry::lookupTarget(targetTriple, error);

        if (!target)
        {
            return;
        }

        auto cpu = "generic";
        auto features = "";

        llvm::TargetOptions opt;
        auto RM = llvm::Optional<llvm::Reloc::Model>();
        auto targetMachine = target->createTargetMachine(targetTriple, cpu, features, opt, RM);

        module->setDataLayout(targetMachine->createDataLayout());
        module->setTargetTriple(targetTriple);

        std::error_code ec;
        llvm::raw_fd_ostream dest(filename, ec, llvm::sys::fs::OF_None);

        if (ec)
        {
            error = "Could not open file: " + ec.message();
            return;
        }

        llvm::legacy::PassManager pass;
        auto FileType = llvm::CGFT_ObjectFile;

        if (targetMachine->addPassesToEmitFile(pass, dest, nullptr, FileType))
        {
            error = "TargetMachine can't emit a file of this type";
            return;
        }

        pass.run(*module);
        dest.flush();
    }
};
}