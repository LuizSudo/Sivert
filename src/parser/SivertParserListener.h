
// Generated from SivertParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "SivertParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by SivertParser.
 */
class  SivertParserListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStart_(SivertParser::Start_Context *ctx) = 0;
  virtual void exitStart_(SivertParser::Start_Context *ctx) = 0;

  virtual void enterChunk(SivertParser::ChunkContext *ctx) = 0;
  virtual void exitChunk(SivertParser::ChunkContext *ctx) = 0;

  virtual void enterBlock(SivertParser::BlockContext *ctx) = 0;
  virtual void exitBlock(SivertParser::BlockContext *ctx) = 0;

  virtual void enterStat(SivertParser::StatContext *ctx) = 0;
  virtual void exitStat(SivertParser::StatContext *ctx) = 0;

  virtual void enterAttnamelist(SivertParser::AttnamelistContext *ctx) = 0;
  virtual void exitAttnamelist(SivertParser::AttnamelistContext *ctx) = 0;

  virtual void enterAttrib(SivertParser::AttribContext *ctx) = 0;
  virtual void exitAttrib(SivertParser::AttribContext *ctx) = 0;

  virtual void enterRetstat(SivertParser::RetstatContext *ctx) = 0;
  virtual void exitRetstat(SivertParser::RetstatContext *ctx) = 0;

  virtual void enterLabel(SivertParser::LabelContext *ctx) = 0;
  virtual void exitLabel(SivertParser::LabelContext *ctx) = 0;

  virtual void enterFuncname(SivertParser::FuncnameContext *ctx) = 0;
  virtual void exitFuncname(SivertParser::FuncnameContext *ctx) = 0;

  virtual void enterVarlist(SivertParser::VarlistContext *ctx) = 0;
  virtual void exitVarlist(SivertParser::VarlistContext *ctx) = 0;

  virtual void enterNamelist(SivertParser::NamelistContext *ctx) = 0;
  virtual void exitNamelist(SivertParser::NamelistContext *ctx) = 0;

  virtual void enterExplist(SivertParser::ExplistContext *ctx) = 0;
  virtual void exitExplist(SivertParser::ExplistContext *ctx) = 0;

  virtual void enterExp(SivertParser::ExpContext *ctx) = 0;
  virtual void exitExp(SivertParser::ExpContext *ctx) = 0;

  virtual void enterVar(SivertParser::VarContext *ctx) = 0;
  virtual void exitVar(SivertParser::VarContext *ctx) = 0;

  virtual void enterPrefixexp(SivertParser::PrefixexpContext *ctx) = 0;
  virtual void exitPrefixexp(SivertParser::PrefixexpContext *ctx) = 0;

  virtual void enterFunctioncall(SivertParser::FunctioncallContext *ctx) = 0;
  virtual void exitFunctioncall(SivertParser::FunctioncallContext *ctx) = 0;

  virtual void enterArgs(SivertParser::ArgsContext *ctx) = 0;
  virtual void exitArgs(SivertParser::ArgsContext *ctx) = 0;

  virtual void enterFunctiondef(SivertParser::FunctiondefContext *ctx) = 0;
  virtual void exitFunctiondef(SivertParser::FunctiondefContext *ctx) = 0;

  virtual void enterFuncbody(SivertParser::FuncbodyContext *ctx) = 0;
  virtual void exitFuncbody(SivertParser::FuncbodyContext *ctx) = 0;

  virtual void enterParlist(SivertParser::ParlistContext *ctx) = 0;
  virtual void exitParlist(SivertParser::ParlistContext *ctx) = 0;

  virtual void enterTableconstructor(SivertParser::TableconstructorContext *ctx) = 0;
  virtual void exitTableconstructor(SivertParser::TableconstructorContext *ctx) = 0;

  virtual void enterFieldlist(SivertParser::FieldlistContext *ctx) = 0;
  virtual void exitFieldlist(SivertParser::FieldlistContext *ctx) = 0;

  virtual void enterField(SivertParser::FieldContext *ctx) = 0;
  virtual void exitField(SivertParser::FieldContext *ctx) = 0;

  virtual void enterFieldsep(SivertParser::FieldsepContext *ctx) = 0;
  virtual void exitFieldsep(SivertParser::FieldsepContext *ctx) = 0;

  virtual void enterNumber(SivertParser::NumberContext *ctx) = 0;
  virtual void exitNumber(SivertParser::NumberContext *ctx) = 0;

  virtual void enterString(SivertParser::StringContext *ctx) = 0;
  virtual void exitString(SivertParser::StringContext *ctx) = 0;


};

