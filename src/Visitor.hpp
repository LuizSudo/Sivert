#pragma once

#include "logic/Scope.hpp"
#include "exceptions/SyntaxErrorException.hpp"
#include "lexer/SivertLexer.h"
#include "parser/SivertParserBaseListener.h"

#include "logic/Helper.hpp"

#include <llvm/IR/IRBuilder.h>
#include <llvm/Support/raw_ostream.h>
#include <string>

using namespace antlr4;

namespace SivertLang
{
class Visitor
{
public:
    std::unique_ptr<llvm::LLVMContext> llvm_context;
    std::unique_ptr<llvm::Module> llvm_module;
    llvm::IRBuilder<> builder;
    std::string path;

    std::map<std::string, llvm::Value *> variables;

    Visitor(const std::string &path) : llvm_context(std::make_unique<llvm::LLVMContext>()),
                                       llvm_module(std::make_unique<llvm::Module>(path, *this->llvm_context)),
                                       builder(*this->llvm_context),
                                       path(path) {}

    void start()
    {
        std::ifstream stream;
        stream.open(path);

        ANTLRInputStream input(stream);
        SivertLexer lexer(&input);
        CommonTokenStream tokens(&lexer);
        SivertParser parser(&tokens);

        if (lexer.getNumberOfSyntaxErrors() || parser.getNumberOfSyntaxErrors())
        {
            throw SyntaxErrorException();
        }

        this->visitInstructions(parser.instructions());
    }

    void visitInstructions(SivertParser::InstructionsContext *context);

    void visitInstruction(SivertParser::InstructionContext *context);
};
}