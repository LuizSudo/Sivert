
// Generated from SivertParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "SivertParserListener.h"


/**
 * This class provides an empty implementation of SivertParserListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  SivertParserBaseListener : public SivertParserListener {
public:

  virtual void enterStart_(SivertParser::Start_Context * /*ctx*/) override { }
  virtual void exitStart_(SivertParser::Start_Context * /*ctx*/) override { }

  virtual void enterChunk(SivertParser::ChunkContext * /*ctx*/) override { }
  virtual void exitChunk(SivertParser::ChunkContext * /*ctx*/) override { }

  virtual void enterBlock(SivertParser::BlockContext * /*ctx*/) override { }
  virtual void exitBlock(SivertParser::BlockContext * /*ctx*/) override { }

  virtual void enterStat(SivertParser::StatContext * /*ctx*/) override { }
  virtual void exitStat(SivertParser::StatContext * /*ctx*/) override { }

  virtual void enterAttnamelist(SivertParser::AttnamelistContext * /*ctx*/) override { }
  virtual void exitAttnamelist(SivertParser::AttnamelistContext * /*ctx*/) override { }

  virtual void enterAttrib(SivertParser::AttribContext * /*ctx*/) override { }
  virtual void exitAttrib(SivertParser::AttribContext * /*ctx*/) override { }

  virtual void enterRetstat(SivertParser::RetstatContext * /*ctx*/) override { }
  virtual void exitRetstat(SivertParser::RetstatContext * /*ctx*/) override { }

  virtual void enterLabel(SivertParser::LabelContext * /*ctx*/) override { }
  virtual void exitLabel(SivertParser::LabelContext * /*ctx*/) override { }

  virtual void enterFuncname(SivertParser::FuncnameContext * /*ctx*/) override { }
  virtual void exitFuncname(SivertParser::FuncnameContext * /*ctx*/) override { }

  virtual void enterVarlist(SivertParser::VarlistContext * /*ctx*/) override { }
  virtual void exitVarlist(SivertParser::VarlistContext * /*ctx*/) override { }

  virtual void enterNamelist(SivertParser::NamelistContext * /*ctx*/) override { }
  virtual void exitNamelist(SivertParser::NamelistContext * /*ctx*/) override { }

  virtual void enterExplist(SivertParser::ExplistContext * /*ctx*/) override { }
  virtual void exitExplist(SivertParser::ExplistContext * /*ctx*/) override { }

  virtual void enterExp(SivertParser::ExpContext * /*ctx*/) override { }
  virtual void exitExp(SivertParser::ExpContext * /*ctx*/) override { }

  virtual void enterVar(SivertParser::VarContext * /*ctx*/) override { }
  virtual void exitVar(SivertParser::VarContext * /*ctx*/) override { }

  virtual void enterPrefixexp(SivertParser::PrefixexpContext * /*ctx*/) override { }
  virtual void exitPrefixexp(SivertParser::PrefixexpContext * /*ctx*/) override { }

  virtual void enterFunctioncall(SivertParser::FunctioncallContext * /*ctx*/) override { }
  virtual void exitFunctioncall(SivertParser::FunctioncallContext * /*ctx*/) override { }

  virtual void enterArgs(SivertParser::ArgsContext * /*ctx*/) override { }
  virtual void exitArgs(SivertParser::ArgsContext * /*ctx*/) override { }

  virtual void enterFunctiondef(SivertParser::FunctiondefContext * /*ctx*/) override { }
  virtual void exitFunctiondef(SivertParser::FunctiondefContext * /*ctx*/) override { }

  virtual void enterFuncbody(SivertParser::FuncbodyContext * /*ctx*/) override { }
  virtual void exitFuncbody(SivertParser::FuncbodyContext * /*ctx*/) override { }

  virtual void enterParlist(SivertParser::ParlistContext * /*ctx*/) override { }
  virtual void exitParlist(SivertParser::ParlistContext * /*ctx*/) override { }

  virtual void enterTableconstructor(SivertParser::TableconstructorContext * /*ctx*/) override { }
  virtual void exitTableconstructor(SivertParser::TableconstructorContext * /*ctx*/) override { }

  virtual void enterFieldlist(SivertParser::FieldlistContext * /*ctx*/) override { }
  virtual void exitFieldlist(SivertParser::FieldlistContext * /*ctx*/) override { }

  virtual void enterField(SivertParser::FieldContext * /*ctx*/) override { }
  virtual void exitField(SivertParser::FieldContext * /*ctx*/) override { }

  virtual void enterFieldsep(SivertParser::FieldsepContext * /*ctx*/) override { }
  virtual void exitFieldsep(SivertParser::FieldsepContext * /*ctx*/) override { }

  virtual void enterNumber(SivertParser::NumberContext * /*ctx*/) override { }
  virtual void exitNumber(SivertParser::NumberContext * /*ctx*/) override { }

  virtual void enterString(SivertParser::StringContext * /*ctx*/) override { }
  virtual void exitString(SivertParser::StringContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

