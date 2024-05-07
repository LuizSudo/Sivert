
// Generated from SivertParser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  SivertParser : public antlr4::Parser {
public:
  enum {
    SEMI = 1, EQ = 2, BREAK = 3, GOTO = 4, DO = 5, END = 6, WHILE = 7, REPEAT = 8, 
    UNTIL = 9, IF = 10, THEN = 11, ELSEIF = 12, ELSE = 13, FOR = 14, COMMA = 15, 
    IN = 16, FUNCTION = 17, LOCAL = 18, LT = 19, GT = 20, RETURN = 21, CONTINUE = 22, 
    CC = 23, NIL = 24, FALSE = 25, TRUE = 26, DOT = 27, SQUIG = 28, MINUS = 29, 
    POUND = 30, OP = 31, CP = 32, NOT = 33, LL = 34, GG = 35, AMP = 36, 
    SS = 37, PER = 38, COL = 39, LE = 40, GE = 41, AND = 42, OR = 43, PLUS = 44, 
    STAR = 45, OCU = 46, CCU = 47, OB = 48, CB = 49, EE = 50, DD = 51, PIPE = 52, 
    CARET = 53, SLASH = 54, DDD = 55, SQEQ = 56, NAME = 57, NORMALSTRING = 58, 
    CHARSTRING = 59, LONGSTRING = 60, INT = 61, HEX = 62, FLOAT = 63, HEX_FLOAT = 64, 
    COMMENT = 65, WS = 66, NL = 67, SHEBANG = 68
  };

  enum {
    RuleStart_ = 0, RuleChunk = 1, RuleBlock = 2, RuleStat = 3, RuleAttnamelist = 4, 
    RuleAttrib = 5, RuleRetstat = 6, RuleLabel = 7, RuleFuncname = 8, RuleVarlist = 9, 
    RuleNamelist = 10, RuleExplist = 11, RuleExp = 12, RuleVar = 13, RulePrefixexp = 14, 
    RuleFunctioncall = 15, RuleArgs = 16, RuleFunctiondef = 17, RuleFuncbody = 18, 
    RuleParlist = 19, RuleTableconstructor = 20, RuleFieldlist = 21, RuleField = 22, 
    RuleFieldsep = 23, RuleNumber = 24, RuleString = 25
  };

  explicit SivertParser(antlr4::TokenStream *input);

  SivertParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~SivertParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class Start_Context;
  class ChunkContext;
  class BlockContext;
  class StatContext;
  class AttnamelistContext;
  class AttribContext;
  class RetstatContext;
  class LabelContext;
  class FuncnameContext;
  class VarlistContext;
  class NamelistContext;
  class ExplistContext;
  class ExpContext;
  class VarContext;
  class PrefixexpContext;
  class FunctioncallContext;
  class ArgsContext;
  class FunctiondefContext;
  class FuncbodyContext;
  class ParlistContext;
  class TableconstructorContext;
  class FieldlistContext;
  class FieldContext;
  class FieldsepContext;
  class NumberContext;
  class StringContext; 

  class  Start_Context : public antlr4::ParserRuleContext {
  public:
    Start_Context(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ChunkContext *chunk();
    antlr4::tree::TerminalNode *EOF();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  Start_Context* start_();

  class  ChunkContext : public antlr4::ParserRuleContext {
  public:
    ChunkContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    BlockContext *block();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ChunkContext* chunk();

  class  BlockContext : public antlr4::ParserRuleContext {
  public:
    BlockContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<StatContext *> stat();
    StatContext* stat(size_t i);
    RetstatContext *retstat();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  BlockContext* block();

  class  StatContext : public antlr4::ParserRuleContext {
  public:
    StatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *SEMI();
    VarlistContext *varlist();
    antlr4::tree::TerminalNode *EQ();
    ExplistContext *explist();
    FunctioncallContext *functioncall();
    LabelContext *label();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *GOTO();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *DO();
    std::vector<BlockContext *> block();
    BlockContext* block(size_t i);
    antlr4::tree::TerminalNode *END();
    antlr4::tree::TerminalNode *WHILE();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *REPEAT();
    antlr4::tree::TerminalNode *UNTIL();
    antlr4::tree::TerminalNode *IF();
    std::vector<antlr4::tree::TerminalNode *> THEN();
    antlr4::tree::TerminalNode* THEN(size_t i);
    std::vector<antlr4::tree::TerminalNode *> ELSEIF();
    antlr4::tree::TerminalNode* ELSEIF(size_t i);
    antlr4::tree::TerminalNode *ELSE();
    antlr4::tree::TerminalNode *FOR();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    NamelistContext *namelist();
    antlr4::tree::TerminalNode *IN();
    antlr4::tree::TerminalNode *FUNCTION();
    FuncnameContext *funcname();
    FuncbodyContext *funcbody();
    antlr4::tree::TerminalNode *LOCAL();
    AttnamelistContext *attnamelist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StatContext* stat();

  class  AttnamelistContext : public antlr4::ParserRuleContext {
  public:
    AttnamelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    std::vector<AttribContext *> attrib();
    AttribContext* attrib(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttnamelistContext* attnamelist();

  class  AttribContext : public antlr4::ParserRuleContext {
  public:
    AttribContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *NAME();
    antlr4::tree::TerminalNode *GT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  AttribContext* attrib();

  class  RetstatContext : public antlr4::ParserRuleContext {
  public:
    RetstatContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *RETURN();
    antlr4::tree::TerminalNode *BREAK();
    antlr4::tree::TerminalNode *CONTINUE();
    antlr4::tree::TerminalNode *SEMI();
    ExplistContext *explist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  RetstatContext* retstat();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> CC();
    antlr4::tree::TerminalNode* CC(size_t i);
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  LabelContext* label();

  class  FuncnameContext : public antlr4::ParserRuleContext {
  public:
    FuncnameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    antlr4::tree::TerminalNode *COL();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncnameContext* funcname();

  class  VarlistContext : public antlr4::ParserRuleContext {
  public:
    VarlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<VarContext *> var();
    VarContext* var(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarlistContext* varlist();

  class  NamelistContext : public antlr4::ParserRuleContext {
  public:
    NamelistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NamelistContext* namelist();

  class  ExplistContext : public antlr4::ParserRuleContext {
  public:
    ExplistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExplistContext* explist();

  class  ExpContext : public antlr4::ParserRuleContext {
  public:
    ExpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NIL();
    antlr4::tree::TerminalNode *FALSE();
    antlr4::tree::TerminalNode *TRUE();
    NumberContext *number();
    StringContext *string();
    antlr4::tree::TerminalNode *DDD();
    FunctiondefContext *functiondef();
    PrefixexpContext *prefixexp();
    TableconstructorContext *tableconstructor();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *NOT();
    antlr4::tree::TerminalNode *POUND();
    antlr4::tree::TerminalNode *MINUS();
    antlr4::tree::TerminalNode *SQUIG();
    antlr4::tree::TerminalNode *CARET();
    antlr4::tree::TerminalNode *STAR();
    antlr4::tree::TerminalNode *SLASH();
    antlr4::tree::TerminalNode *PER();
    antlr4::tree::TerminalNode *SS();
    antlr4::tree::TerminalNode *PLUS();
    antlr4::tree::TerminalNode *DD();
    antlr4::tree::TerminalNode *LT();
    antlr4::tree::TerminalNode *GT();
    antlr4::tree::TerminalNode *LE();
    antlr4::tree::TerminalNode *GE();
    antlr4::tree::TerminalNode *SQEQ();
    antlr4::tree::TerminalNode *EE();
    antlr4::tree::TerminalNode *AND();
    antlr4::tree::TerminalNode *OR();
    antlr4::tree::TerminalNode *AMP();
    antlr4::tree::TerminalNode *PIPE();
    antlr4::tree::TerminalNode *LL();
    antlr4::tree::TerminalNode *GG();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ExpContext* exp();
  ExpContext* exp(int precedence);
  class  VarContext : public antlr4::ParserRuleContext {
  public:
    VarContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NAME();
    PrefixexpContext *prefixexp();
    antlr4::tree::TerminalNode *OB();
    ExpContext *exp();
    antlr4::tree::TerminalNode *CB();
    antlr4::tree::TerminalNode *DOT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  VarContext* var();

  class  PrefixexpContext : public antlr4::ParserRuleContext {
  public:
    PrefixexpContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    std::vector<antlr4::tree::TerminalNode *> OB();
    antlr4::tree::TerminalNode* OB(size_t i);
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CB();
    antlr4::tree::TerminalNode* CB(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    FunctioncallContext *functioncall();
    antlr4::tree::TerminalNode *OP();
    antlr4::tree::TerminalNode *CP();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  PrefixexpContext* prefixexp();

  class  FunctioncallContext : public antlr4::ParserRuleContext {
  public:
    FunctioncallContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> NAME();
    antlr4::tree::TerminalNode* NAME(size_t i);
    ArgsContext *args();
    std::vector<antlr4::tree::TerminalNode *> OB();
    antlr4::tree::TerminalNode* OB(size_t i);
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    std::vector<antlr4::tree::TerminalNode *> CB();
    antlr4::tree::TerminalNode* CB(size_t i);
    std::vector<antlr4::tree::TerminalNode *> DOT();
    antlr4::tree::TerminalNode* DOT(size_t i);
    antlr4::tree::TerminalNode *OP();
    antlr4::tree::TerminalNode *CP();
    antlr4::tree::TerminalNode *COL();
    FunctioncallContext *functioncall();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctioncallContext* functioncall();
  FunctioncallContext* functioncall(int precedence);
  class  ArgsContext : public antlr4::ParserRuleContext {
  public:
    ArgsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP();
    antlr4::tree::TerminalNode *CP();
    ExplistContext *explist();
    TableconstructorContext *tableconstructor();
    StringContext *string();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ArgsContext* args();

  class  FunctiondefContext : public antlr4::ParserRuleContext {
  public:
    FunctiondefContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *FUNCTION();
    FuncbodyContext *funcbody();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FunctiondefContext* functiondef();

  class  FuncbodyContext : public antlr4::ParserRuleContext {
  public:
    FuncbodyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OP();
    ParlistContext *parlist();
    antlr4::tree::TerminalNode *CP();
    BlockContext *block();
    antlr4::tree::TerminalNode *END();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FuncbodyContext* funcbody();

  class  ParlistContext : public antlr4::ParserRuleContext {
  public:
    ParlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    NamelistContext *namelist();
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *DDD();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ParlistContext* parlist();

  class  TableconstructorContext : public antlr4::ParserRuleContext {
  public:
    TableconstructorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OCU();
    antlr4::tree::TerminalNode *CCU();
    FieldlistContext *fieldlist();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  TableconstructorContext* tableconstructor();

  class  FieldlistContext : public antlr4::ParserRuleContext {
  public:
    FieldlistContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<FieldContext *> field();
    FieldContext* field(size_t i);
    std::vector<FieldsepContext *> fieldsep();
    FieldsepContext* fieldsep(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldlistContext* fieldlist();

  class  FieldContext : public antlr4::ParserRuleContext {
  public:
    FieldContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *OB();
    std::vector<ExpContext *> exp();
    ExpContext* exp(size_t i);
    antlr4::tree::TerminalNode *CB();
    antlr4::tree::TerminalNode *EQ();
    antlr4::tree::TerminalNode *NAME();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldContext* field();

  class  FieldsepContext : public antlr4::ParserRuleContext {
  public:
    FieldsepContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *COMMA();
    antlr4::tree::TerminalNode *SEMI();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  FieldsepContext* fieldsep();

  class  NumberContext : public antlr4::ParserRuleContext {
  public:
    NumberContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *INT();
    antlr4::tree::TerminalNode *HEX();
    antlr4::tree::TerminalNode *FLOAT();
    antlr4::tree::TerminalNode *HEX_FLOAT();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  NumberContext* number();

  class  StringContext : public antlr4::ParserRuleContext {
  public:
    StringContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NORMALSTRING();
    antlr4::tree::TerminalNode *CHARSTRING();
    antlr4::tree::TerminalNode *LONGSTRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StringContext* string();


  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex, size_t predicateIndex) override;

  bool expSempred(ExpContext *_localctx, size_t predicateIndex);
  bool functioncallSempred(FunctioncallContext *_localctx, size_t predicateIndex);

  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

