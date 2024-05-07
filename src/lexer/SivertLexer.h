#pragma once

#include "antlr4-runtime.h"

class SivertLexer : public SivertLexerBase {
public:
  enum {
    SEMI = 1,
    EQ = 2,
    BREAK = 3,
    GOTO = 4,
    DO = 5,
    END = 6,
    WHILE = 7,
    REPEAT = 8,
    UNTIL = 9,
    IF = 10,
    THEN = 11,
    ELSEIF = 12,
    ELSE = 13,
    FOR = 14,
    COMMA = 15,
    IN = 16,
    FUNCTION = 17,
    LOCAL = 18,
    LT = 19,
    GT = 20,
    RETURN = 21,
    CONTINUE = 22,
    CC = 23,
    NIL = 24,
    FALSE = 25,
    TRUE = 26,
    DOT = 27,
    SQUIG = 28,
    MINUS = 29,
    POUND = 30,
    OP = 31,
    CP = 32,
    NOT = 33,
    LL = 34,
    GG = 35,
    AMP = 36,
    SS = 37,
    PER = 38,
    COL = 39,
    LE = 40,
    GE = 41,
    AND = 42,
    OR = 43,
    PLUS = 44,
    STAR = 45,
    OCU = 46,
    CCU = 47,
    OB = 48,
    CB = 49,
    EE = 50,
    DD = 51,
    PIPE = 52,
    CARET = 53,
    SLASH = 54,
    DDD = 55,
    SQEQ = 56,
    NAME = 57,
    NORMALSTRING = 58,
    CHARSTRING = 59,
    LONGSTRING = 60,
    INT = 61,
    HEX = 62,
    FLOAT = 63,
    HEX_FLOAT = 64,
    COMMENT = 65,
    WS = 66,
    NL = 67,
    SHEBANG = 68
  };

  explicit SivertLexer(antlr4::CharStream *input);

  ~SivertLexer() override;

  std::string getGrammarFileName() const override;

  const std::vector<std::string> &getRuleNames() const override;

  const std::vector<std::string> &getChannelNames() const override;

  const std::vector<std::string> &getModeNames() const override;

  const antlr4::dfa::Vocabulary &getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN &getATN() const override;

  void action(antlr4::RuleContext *context, size_t ruleIndex,
              size_t actionIndex) override;

  bool sempred(antlr4::RuleContext *_localctx, size_t ruleIndex,
               size_t predicateIndex) override;

  // By default the static state used to implement the lexer is lazily
  // initialized during the first call to the constructor. You can call this
  // function if you wish to initialize the static state ahead of time.
  static void initialize();

private:
  // Individual action functions triggered by action() above.
  void COMMENTAction(antlr4::RuleContext *context, size_t actionIndex);

  // Individual semantic predicate functions triggered by sempred() above.
  bool SHEBANGSempred(antlr4::RuleContext *_localctx, size_t predicateIndex);
};
