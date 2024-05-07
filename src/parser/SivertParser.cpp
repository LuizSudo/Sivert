
// Generated from SivertParser.g4 by ANTLR 4.13.1


#include "SivertParserListener.h"

#include "SivertParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct SivertParserStaticData final {
  SivertParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  SivertParserStaticData(const SivertParserStaticData&) = delete;
  SivertParserStaticData(SivertParserStaticData&&) = delete;
  SivertParserStaticData& operator=(const SivertParserStaticData&) = delete;
  SivertParserStaticData& operator=(SivertParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag sivertparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
SivertParserStaticData *sivertparserParserStaticData = nullptr;

void sivertparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (sivertparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(sivertparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<SivertParserStaticData>(
    std::vector<std::string>{
      "start_", "chunk", "block", "stat", "attnamelist", "attrib", "retstat", 
      "label", "funcname", "varlist", "namelist", "explist", "exp", "var", 
      "prefixexp", "functioncall", "args", "functiondef", "funcbody", "parlist", 
      "tableconstructor", "fieldlist", "field", "fieldsep", "number", "string"
    },
    std::vector<std::string>{
      "", "';'", "'='", "'break'", "'goto'", "'do'", "'end'", "'while'", 
      "'repeat'", "'until'", "'if'", "'then'", "'elseif'", "'else'", "'for'", 
      "','", "'in'", "'function'", "'local'", "'<'", "'>'", "'return'", 
      "'continue'", "'::'", "'nil'", "'false'", "'true'", "'.'", "'~'", 
      "'-'", "'#'", "'('", "')'", "'not'", "'<<'", "'>>'", "'&'", "'//'", 
      "'%'", "':'", "'<='", "'>='", "'and'", "'or'", "'+'", "'*'", "'{'", 
      "'}'", "'['", "']'", "'=='", "'..'", "'|'", "'^'", "'/'", "'...'", 
      "'~='"
    },
    std::vector<std::string>{
      "", "SEMI", "EQ", "BREAK", "GOTO", "DO", "END", "WHILE", "REPEAT", 
      "UNTIL", "IF", "THEN", "ELSEIF", "ELSE", "FOR", "COMMA", "IN", "FUNCTION", 
      "LOCAL", "LT", "GT", "RETURN", "CONTINUE", "CC", "NIL", "FALSE", "TRUE", 
      "DOT", "SQUIG", "MINUS", "POUND", "OP", "CP", "NOT", "LL", "GG", "AMP", 
      "SS", "PER", "COL", "LE", "GE", "AND", "OR", "PLUS", "STAR", "OCU", 
      "CCU", "OB", "CB", "EE", "DD", "PIPE", "CARET", "SLASH", "DDD", "SQEQ", 
      "NAME", "NORMALSTRING", "CHARSTRING", "LONGSTRING", "INT", "HEX", 
      "FLOAT", "HEX_FLOAT", "COMMENT", "WS", "NL", "SHEBANG"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,68,472,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,1,0,1,0,1,0,1,1,1,1,1,2,5,
  	2,59,8,2,10,2,12,2,62,9,2,1,2,3,2,65,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,101,8,3,10,3,12,3,104,9,3,1,
  	3,1,3,3,3,108,8,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,120,8,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,3,1,3,3,3,146,8,3,3,3,148,8,3,1,4,1,4,1,4,1,4,1,4,
  	5,4,155,8,4,10,4,12,4,158,9,4,1,5,1,5,1,5,3,5,163,8,5,1,6,1,6,3,6,167,
  	8,6,1,6,1,6,3,6,171,8,6,1,6,3,6,174,8,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,5,
  	8,183,8,8,10,8,12,8,186,9,8,1,8,1,8,3,8,190,8,8,1,9,1,9,1,9,5,9,195,8,
  	9,10,9,12,9,198,9,9,1,10,1,10,1,10,5,10,203,8,10,10,10,12,10,206,9,10,
  	1,11,1,11,1,11,5,11,211,8,11,10,11,12,11,214,9,11,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,3,12,228,8,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,1,12,
  	1,12,1,12,1,12,1,12,1,12,1,12,1,12,5,12,254,8,12,10,12,12,12,257,9,12,
  	1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,13,3,13,267,8,13,3,13,269,8,13,1,
  	14,1,14,1,14,1,14,1,14,1,14,1,14,5,14,278,8,14,10,14,12,14,281,9,14,1,
  	14,1,14,1,14,1,14,1,14,1,14,1,14,5,14,290,8,14,10,14,12,14,293,9,14,1,
  	14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,1,14,5,14,304,8,14,10,14,12,14,
  	307,9,14,3,14,309,8,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,5,15,319,
  	8,15,10,15,12,15,322,9,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,5,15,334,8,15,10,15,12,15,337,9,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,5,15,348,8,15,10,15,12,15,351,9,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,5,15,365,8,15,10,15,12,15,368,
  	9,15,1,15,1,15,1,15,1,15,3,15,374,8,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,5,15,383,8,15,10,15,12,15,386,9,15,1,15,1,15,1,15,1,15,1,15,1,15,
  	1,15,1,15,5,15,396,8,15,10,15,12,15,399,9,15,1,15,1,15,1,15,5,15,404,
  	8,15,10,15,12,15,407,9,15,1,16,1,16,3,16,411,8,16,1,16,1,16,1,16,3,16,
  	416,8,16,1,17,1,17,1,17,1,18,1,18,1,18,1,18,1,18,1,18,1,19,1,19,1,19,
  	3,19,430,8,19,1,19,1,19,3,19,434,8,19,1,20,1,20,3,20,438,8,20,1,20,1,
  	20,1,21,1,21,1,21,1,21,5,21,446,8,21,10,21,12,21,449,9,21,1,21,3,21,452,
  	8,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,22,3,22,464,8,22,
  	1,23,1,23,1,24,1,24,1,25,1,25,1,25,0,2,24,30,26,0,2,4,6,8,10,12,14,16,
  	18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,0,8,2,0,28,30,33,33,
  	3,0,37,38,45,45,54,54,2,0,29,29,44,44,4,0,19,20,40,41,50,50,56,56,3,0,
  	28,28,34,36,52,52,2,0,1,1,15,15,1,0,61,64,1,0,58,60,531,0,52,1,0,0,0,
  	2,55,1,0,0,0,4,60,1,0,0,0,6,147,1,0,0,0,8,149,1,0,0,0,10,162,1,0,0,0,
  	12,170,1,0,0,0,14,175,1,0,0,0,16,179,1,0,0,0,18,191,1,0,0,0,20,199,1,
  	0,0,0,22,207,1,0,0,0,24,227,1,0,0,0,26,268,1,0,0,0,28,308,1,0,0,0,30,
  	373,1,0,0,0,32,415,1,0,0,0,34,417,1,0,0,0,36,420,1,0,0,0,38,433,1,0,0,
  	0,40,435,1,0,0,0,42,441,1,0,0,0,44,463,1,0,0,0,46,465,1,0,0,0,48,467,
  	1,0,0,0,50,469,1,0,0,0,52,53,3,2,1,0,53,54,5,0,0,1,54,1,1,0,0,0,55,56,
  	3,4,2,0,56,3,1,0,0,0,57,59,3,6,3,0,58,57,1,0,0,0,59,62,1,0,0,0,60,58,
  	1,0,0,0,60,61,1,0,0,0,61,64,1,0,0,0,62,60,1,0,0,0,63,65,3,12,6,0,64,63,
  	1,0,0,0,64,65,1,0,0,0,65,5,1,0,0,0,66,148,5,1,0,0,67,68,3,18,9,0,68,69,
  	5,2,0,0,69,70,3,22,11,0,70,148,1,0,0,0,71,148,3,30,15,0,72,148,3,14,7,
  	0,73,148,5,3,0,0,74,75,5,4,0,0,75,148,5,57,0,0,76,77,5,5,0,0,77,78,3,
  	4,2,0,78,79,5,6,0,0,79,148,1,0,0,0,80,81,5,7,0,0,81,82,3,24,12,0,82,83,
  	5,5,0,0,83,84,3,4,2,0,84,85,5,6,0,0,85,148,1,0,0,0,86,87,5,8,0,0,87,88,
  	3,4,2,0,88,89,5,9,0,0,89,90,3,24,12,0,90,148,1,0,0,0,91,92,5,10,0,0,92,
  	93,3,24,12,0,93,94,5,11,0,0,94,102,3,4,2,0,95,96,5,12,0,0,96,97,3,24,
  	12,0,97,98,5,11,0,0,98,99,3,4,2,0,99,101,1,0,0,0,100,95,1,0,0,0,101,104,
  	1,0,0,0,102,100,1,0,0,0,102,103,1,0,0,0,103,107,1,0,0,0,104,102,1,0,0,
  	0,105,106,5,13,0,0,106,108,3,4,2,0,107,105,1,0,0,0,107,108,1,0,0,0,108,
  	109,1,0,0,0,109,110,5,6,0,0,110,148,1,0,0,0,111,112,5,14,0,0,112,113,
  	5,57,0,0,113,114,5,2,0,0,114,115,3,24,12,0,115,116,5,15,0,0,116,119,3,
  	24,12,0,117,118,5,15,0,0,118,120,3,24,12,0,119,117,1,0,0,0,119,120,1,
  	0,0,0,120,121,1,0,0,0,121,122,5,5,0,0,122,123,3,4,2,0,123,124,5,6,0,0,
  	124,148,1,0,0,0,125,126,5,14,0,0,126,127,3,20,10,0,127,128,5,16,0,0,128,
  	129,3,22,11,0,129,130,5,5,0,0,130,131,3,4,2,0,131,132,5,6,0,0,132,148,
  	1,0,0,0,133,134,5,17,0,0,134,135,3,16,8,0,135,136,3,36,18,0,136,148,1,
  	0,0,0,137,138,5,18,0,0,138,139,5,17,0,0,139,140,5,57,0,0,140,148,3,36,
  	18,0,141,142,5,18,0,0,142,145,3,8,4,0,143,144,5,2,0,0,144,146,3,22,11,
  	0,145,143,1,0,0,0,145,146,1,0,0,0,146,148,1,0,0,0,147,66,1,0,0,0,147,
  	67,1,0,0,0,147,71,1,0,0,0,147,72,1,0,0,0,147,73,1,0,0,0,147,74,1,0,0,
  	0,147,76,1,0,0,0,147,80,1,0,0,0,147,86,1,0,0,0,147,91,1,0,0,0,147,111,
  	1,0,0,0,147,125,1,0,0,0,147,133,1,0,0,0,147,137,1,0,0,0,147,141,1,0,0,
  	0,148,7,1,0,0,0,149,150,5,57,0,0,150,156,3,10,5,0,151,152,5,15,0,0,152,
  	153,5,57,0,0,153,155,3,10,5,0,154,151,1,0,0,0,155,158,1,0,0,0,156,154,
  	1,0,0,0,156,157,1,0,0,0,157,9,1,0,0,0,158,156,1,0,0,0,159,160,5,19,0,
  	0,160,161,5,57,0,0,161,163,5,20,0,0,162,159,1,0,0,0,162,163,1,0,0,0,163,
  	11,1,0,0,0,164,166,5,21,0,0,165,167,3,22,11,0,166,165,1,0,0,0,166,167,
  	1,0,0,0,167,171,1,0,0,0,168,171,5,3,0,0,169,171,5,22,0,0,170,164,1,0,
  	0,0,170,168,1,0,0,0,170,169,1,0,0,0,171,173,1,0,0,0,172,174,5,1,0,0,173,
  	172,1,0,0,0,173,174,1,0,0,0,174,13,1,0,0,0,175,176,5,23,0,0,176,177,5,
  	57,0,0,177,178,5,23,0,0,178,15,1,0,0,0,179,184,5,57,0,0,180,181,5,27,
  	0,0,181,183,5,57,0,0,182,180,1,0,0,0,183,186,1,0,0,0,184,182,1,0,0,0,
  	184,185,1,0,0,0,185,189,1,0,0,0,186,184,1,0,0,0,187,188,5,39,0,0,188,
  	190,5,57,0,0,189,187,1,0,0,0,189,190,1,0,0,0,190,17,1,0,0,0,191,196,3,
  	26,13,0,192,193,5,15,0,0,193,195,3,26,13,0,194,192,1,0,0,0,195,198,1,
  	0,0,0,196,194,1,0,0,0,196,197,1,0,0,0,197,19,1,0,0,0,198,196,1,0,0,0,
  	199,204,5,57,0,0,200,201,5,15,0,0,201,203,5,57,0,0,202,200,1,0,0,0,203,
  	206,1,0,0,0,204,202,1,0,0,0,204,205,1,0,0,0,205,21,1,0,0,0,206,204,1,
  	0,0,0,207,212,3,24,12,0,208,209,5,15,0,0,209,211,3,24,12,0,210,208,1,
  	0,0,0,211,214,1,0,0,0,212,210,1,0,0,0,212,213,1,0,0,0,213,23,1,0,0,0,
  	214,212,1,0,0,0,215,216,6,12,-1,0,216,228,5,24,0,0,217,228,5,25,0,0,218,
  	228,5,26,0,0,219,228,3,48,24,0,220,228,3,50,25,0,221,228,5,55,0,0,222,
  	228,3,34,17,0,223,228,3,28,14,0,224,228,3,40,20,0,225,226,7,0,0,0,226,
  	228,3,24,12,8,227,215,1,0,0,0,227,217,1,0,0,0,227,218,1,0,0,0,227,219,
  	1,0,0,0,227,220,1,0,0,0,227,221,1,0,0,0,227,222,1,0,0,0,227,223,1,0,0,
  	0,227,224,1,0,0,0,227,225,1,0,0,0,228,255,1,0,0,0,229,230,10,9,0,0,230,
  	231,5,53,0,0,231,254,3,24,12,9,232,233,10,7,0,0,233,234,7,1,0,0,234,254,
  	3,24,12,8,235,236,10,6,0,0,236,237,7,2,0,0,237,254,3,24,12,7,238,239,
  	10,5,0,0,239,240,5,51,0,0,240,254,3,24,12,5,241,242,10,4,0,0,242,243,
  	7,3,0,0,243,254,3,24,12,5,244,245,10,3,0,0,245,246,5,42,0,0,246,254,3,
  	24,12,4,247,248,10,2,0,0,248,249,5,43,0,0,249,254,3,24,12,3,250,251,10,
  	1,0,0,251,252,7,4,0,0,252,254,3,24,12,2,253,229,1,0,0,0,253,232,1,0,0,
  	0,253,235,1,0,0,0,253,238,1,0,0,0,253,241,1,0,0,0,253,244,1,0,0,0,253,
  	247,1,0,0,0,253,250,1,0,0,0,254,257,1,0,0,0,255,253,1,0,0,0,255,256,1,
  	0,0,0,256,25,1,0,0,0,257,255,1,0,0,0,258,269,5,57,0,0,259,266,3,28,14,
  	0,260,261,5,48,0,0,261,262,3,24,12,0,262,263,5,49,0,0,263,267,1,0,0,0,
  	264,265,5,27,0,0,265,267,5,57,0,0,266,260,1,0,0,0,266,264,1,0,0,0,267,
  	269,1,0,0,0,268,258,1,0,0,0,268,259,1,0,0,0,269,27,1,0,0,0,270,279,5,
  	57,0,0,271,272,5,48,0,0,272,273,3,24,12,0,273,274,5,49,0,0,274,278,1,
  	0,0,0,275,276,5,27,0,0,276,278,5,57,0,0,277,271,1,0,0,0,277,275,1,0,0,
  	0,278,281,1,0,0,0,279,277,1,0,0,0,279,280,1,0,0,0,280,309,1,0,0,0,281,
  	279,1,0,0,0,282,291,3,30,15,0,283,284,5,48,0,0,284,285,3,24,12,0,285,
  	286,5,49,0,0,286,290,1,0,0,0,287,288,5,27,0,0,288,290,5,57,0,0,289,283,
  	1,0,0,0,289,287,1,0,0,0,290,293,1,0,0,0,291,289,1,0,0,0,291,292,1,0,0,
  	0,292,309,1,0,0,0,293,291,1,0,0,0,294,295,5,31,0,0,295,296,3,24,12,0,
  	296,305,5,32,0,0,297,298,5,48,0,0,298,299,3,24,12,0,299,300,5,49,0,0,
  	300,304,1,0,0,0,301,302,5,27,0,0,302,304,5,57,0,0,303,297,1,0,0,0,303,
  	301,1,0,0,0,304,307,1,0,0,0,305,303,1,0,0,0,305,306,1,0,0,0,306,309,1,
  	0,0,0,307,305,1,0,0,0,308,270,1,0,0,0,308,282,1,0,0,0,308,294,1,0,0,0,
  	309,29,1,0,0,0,310,311,6,15,-1,0,311,320,5,57,0,0,312,313,5,48,0,0,313,
  	314,3,24,12,0,314,315,5,49,0,0,315,319,1,0,0,0,316,317,5,27,0,0,317,319,
  	5,57,0,0,318,312,1,0,0,0,318,316,1,0,0,0,319,322,1,0,0,0,320,318,1,0,
  	0,0,320,321,1,0,0,0,321,323,1,0,0,0,322,320,1,0,0,0,323,374,3,32,16,0,
  	324,325,5,31,0,0,325,326,3,24,12,0,326,335,5,32,0,0,327,328,5,48,0,0,
  	328,329,3,24,12,0,329,330,5,49,0,0,330,334,1,0,0,0,331,332,5,27,0,0,332,
  	334,5,57,0,0,333,327,1,0,0,0,333,331,1,0,0,0,334,337,1,0,0,0,335,333,
  	1,0,0,0,335,336,1,0,0,0,336,338,1,0,0,0,337,335,1,0,0,0,338,339,3,32,
  	16,0,339,374,1,0,0,0,340,349,5,57,0,0,341,342,5,48,0,0,342,343,3,24,12,
  	0,343,344,5,49,0,0,344,348,1,0,0,0,345,346,5,27,0,0,346,348,5,57,0,0,
  	347,341,1,0,0,0,347,345,1,0,0,0,348,351,1,0,0,0,349,347,1,0,0,0,349,350,
  	1,0,0,0,350,352,1,0,0,0,351,349,1,0,0,0,352,353,5,39,0,0,353,354,5,57,
  	0,0,354,374,3,32,16,0,355,356,5,31,0,0,356,357,3,24,12,0,357,366,5,32,
  	0,0,358,359,5,48,0,0,359,360,3,24,12,0,360,361,5,49,0,0,361,365,1,0,0,
  	0,362,363,5,27,0,0,363,365,5,57,0,0,364,358,1,0,0,0,364,362,1,0,0,0,365,
  	368,1,0,0,0,366,364,1,0,0,0,366,367,1,0,0,0,367,369,1,0,0,0,368,366,1,
  	0,0,0,369,370,5,39,0,0,370,371,5,57,0,0,371,372,3,32,16,0,372,374,1,0,
  	0,0,373,310,1,0,0,0,373,324,1,0,0,0,373,340,1,0,0,0,373,355,1,0,0,0,374,
  	405,1,0,0,0,375,384,10,5,0,0,376,377,5,48,0,0,377,378,3,24,12,0,378,379,
  	5,49,0,0,379,383,1,0,0,0,380,381,5,27,0,0,381,383,5,57,0,0,382,376,1,
  	0,0,0,382,380,1,0,0,0,383,386,1,0,0,0,384,382,1,0,0,0,384,385,1,0,0,0,
  	385,387,1,0,0,0,386,384,1,0,0,0,387,404,3,32,16,0,388,397,10,2,0,0,389,
  	390,5,48,0,0,390,391,3,24,12,0,391,392,5,49,0,0,392,396,1,0,0,0,393,394,
  	5,27,0,0,394,396,5,57,0,0,395,389,1,0,0,0,395,393,1,0,0,0,396,399,1,0,
  	0,0,397,395,1,0,0,0,397,398,1,0,0,0,398,400,1,0,0,0,399,397,1,0,0,0,400,
  	401,5,39,0,0,401,402,5,57,0,0,402,404,3,32,16,0,403,375,1,0,0,0,403,388,
  	1,0,0,0,404,407,1,0,0,0,405,403,1,0,0,0,405,406,1,0,0,0,406,31,1,0,0,
  	0,407,405,1,0,0,0,408,410,5,31,0,0,409,411,3,22,11,0,410,409,1,0,0,0,
  	410,411,1,0,0,0,411,412,1,0,0,0,412,416,5,32,0,0,413,416,3,40,20,0,414,
  	416,3,50,25,0,415,408,1,0,0,0,415,413,1,0,0,0,415,414,1,0,0,0,416,33,
  	1,0,0,0,417,418,5,17,0,0,418,419,3,36,18,0,419,35,1,0,0,0,420,421,5,31,
  	0,0,421,422,3,38,19,0,422,423,5,32,0,0,423,424,3,4,2,0,424,425,5,6,0,
  	0,425,37,1,0,0,0,426,429,3,20,10,0,427,428,5,15,0,0,428,430,5,55,0,0,
  	429,427,1,0,0,0,429,430,1,0,0,0,430,434,1,0,0,0,431,434,5,55,0,0,432,
  	434,1,0,0,0,433,426,1,0,0,0,433,431,1,0,0,0,433,432,1,0,0,0,434,39,1,
  	0,0,0,435,437,5,46,0,0,436,438,3,42,21,0,437,436,1,0,0,0,437,438,1,0,
  	0,0,438,439,1,0,0,0,439,440,5,47,0,0,440,41,1,0,0,0,441,447,3,44,22,0,
  	442,443,3,46,23,0,443,444,3,44,22,0,444,446,1,0,0,0,445,442,1,0,0,0,446,
  	449,1,0,0,0,447,445,1,0,0,0,447,448,1,0,0,0,448,451,1,0,0,0,449,447,1,
  	0,0,0,450,452,3,46,23,0,451,450,1,0,0,0,451,452,1,0,0,0,452,43,1,0,0,
  	0,453,454,5,48,0,0,454,455,3,24,12,0,455,456,5,49,0,0,456,457,5,2,0,0,
  	457,458,3,24,12,0,458,464,1,0,0,0,459,460,5,57,0,0,460,461,5,2,0,0,461,
  	464,3,24,12,0,462,464,3,24,12,0,463,453,1,0,0,0,463,459,1,0,0,0,463,462,
  	1,0,0,0,464,45,1,0,0,0,465,466,7,5,0,0,466,47,1,0,0,0,467,468,7,6,0,0,
  	468,49,1,0,0,0,469,470,7,7,0,0,470,51,1,0,0,0,52,60,64,102,107,119,145,
  	147,156,162,166,170,173,184,189,196,204,212,227,253,255,266,268,277,279,
  	289,291,303,305,308,318,320,333,335,347,349,364,366,373,382,384,395,397,
  	403,405,410,415,429,433,437,447,451,463
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  sivertparserParserStaticData = staticData.release();
}

}

SivertParser::SivertParser(TokenStream *input) : SivertParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

SivertParser::SivertParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  SivertParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *sivertparserParserStaticData->atn, sivertparserParserStaticData->decisionToDFA, sivertparserParserStaticData->sharedContextCache, options);
}

SivertParser::~SivertParser() {
  delete _interpreter;
}

const atn::ATN& SivertParser::getATN() const {
  return *sivertparserParserStaticData->atn;
}

std::string SivertParser::getGrammarFileName() const {
  return "SivertParser.g4";
}

const std::vector<std::string>& SivertParser::getRuleNames() const {
  return sivertparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& SivertParser::getVocabulary() const {
  return sivertparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView SivertParser::getSerializedATN() const {
  return sivertparserParserStaticData->serializedATN;
}


//----------------- Start_Context ------------------------------------------------------------------

SivertParser::Start_Context::Start_Context(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SivertParser::ChunkContext* SivertParser::Start_Context::chunk() {
  return getRuleContext<SivertParser::ChunkContext>(0);
}

tree::TerminalNode* SivertParser::Start_Context::EOF() {
  return getToken(SivertParser::EOF, 0);
}


size_t SivertParser::Start_Context::getRuleIndex() const {
  return SivertParser::RuleStart_;
}

void SivertParser::Start_Context::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStart_(this);
}

void SivertParser::Start_Context::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStart_(this);
}

SivertParser::Start_Context* SivertParser::start_() {
  Start_Context *_localctx = _tracker.createInstance<Start_Context>(_ctx, getState());
  enterRule(_localctx, 0, SivertParser::RuleStart_);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(52);
    chunk();
    setState(53);
    match(SivertParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ChunkContext ------------------------------------------------------------------

SivertParser::ChunkContext::ChunkContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SivertParser::BlockContext* SivertParser::ChunkContext::block() {
  return getRuleContext<SivertParser::BlockContext>(0);
}


size_t SivertParser::ChunkContext::getRuleIndex() const {
  return SivertParser::RuleChunk;
}

void SivertParser::ChunkContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterChunk(this);
}

void SivertParser::ChunkContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitChunk(this);
}

SivertParser::ChunkContext* SivertParser::chunk() {
  ChunkContext *_localctx = _tracker.createInstance<ChunkContext>(_ctx, getState());
  enterRule(_localctx, 2, SivertParser::RuleChunk);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(55);
    block();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockContext ------------------------------------------------------------------

SivertParser::BlockContext::BlockContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SivertParser::StatContext *> SivertParser::BlockContext::stat() {
  return getRuleContexts<SivertParser::StatContext>();
}

SivertParser::StatContext* SivertParser::BlockContext::stat(size_t i) {
  return getRuleContext<SivertParser::StatContext>(i);
}

SivertParser::RetstatContext* SivertParser::BlockContext::retstat() {
  return getRuleContext<SivertParser::RetstatContext>(0);
}


size_t SivertParser::BlockContext::getRuleIndex() const {
  return SivertParser::RuleBlock;
}

void SivertParser::BlockContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBlock(this);
}

void SivertParser::BlockContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBlock(this);
}

SivertParser::BlockContext* SivertParser::block() {
  BlockContext *_localctx = _tracker.createInstance<BlockContext>(_ctx, getState());
  enterRule(_localctx, 4, SivertParser::RuleBlock);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(60);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(57);
        stat(); 
      }
      setState(62);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(64);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 6291464) != 0)) {
      setState(63);
      retstat();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatContext ------------------------------------------------------------------

SivertParser::StatContext::StatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SivertParser::StatContext::SEMI() {
  return getToken(SivertParser::SEMI, 0);
}

SivertParser::VarlistContext* SivertParser::StatContext::varlist() {
  return getRuleContext<SivertParser::VarlistContext>(0);
}

tree::TerminalNode* SivertParser::StatContext::EQ() {
  return getToken(SivertParser::EQ, 0);
}

SivertParser::ExplistContext* SivertParser::StatContext::explist() {
  return getRuleContext<SivertParser::ExplistContext>(0);
}

SivertParser::FunctioncallContext* SivertParser::StatContext::functioncall() {
  return getRuleContext<SivertParser::FunctioncallContext>(0);
}

SivertParser::LabelContext* SivertParser::StatContext::label() {
  return getRuleContext<SivertParser::LabelContext>(0);
}

tree::TerminalNode* SivertParser::StatContext::BREAK() {
  return getToken(SivertParser::BREAK, 0);
}

tree::TerminalNode* SivertParser::StatContext::GOTO() {
  return getToken(SivertParser::GOTO, 0);
}

tree::TerminalNode* SivertParser::StatContext::NAME() {
  return getToken(SivertParser::NAME, 0);
}

tree::TerminalNode* SivertParser::StatContext::DO() {
  return getToken(SivertParser::DO, 0);
}

std::vector<SivertParser::BlockContext *> SivertParser::StatContext::block() {
  return getRuleContexts<SivertParser::BlockContext>();
}

SivertParser::BlockContext* SivertParser::StatContext::block(size_t i) {
  return getRuleContext<SivertParser::BlockContext>(i);
}

tree::TerminalNode* SivertParser::StatContext::END() {
  return getToken(SivertParser::END, 0);
}

tree::TerminalNode* SivertParser::StatContext::WHILE() {
  return getToken(SivertParser::WHILE, 0);
}

std::vector<SivertParser::ExpContext *> SivertParser::StatContext::exp() {
  return getRuleContexts<SivertParser::ExpContext>();
}

SivertParser::ExpContext* SivertParser::StatContext::exp(size_t i) {
  return getRuleContext<SivertParser::ExpContext>(i);
}

tree::TerminalNode* SivertParser::StatContext::REPEAT() {
  return getToken(SivertParser::REPEAT, 0);
}

tree::TerminalNode* SivertParser::StatContext::UNTIL() {
  return getToken(SivertParser::UNTIL, 0);
}

tree::TerminalNode* SivertParser::StatContext::IF() {
  return getToken(SivertParser::IF, 0);
}

std::vector<tree::TerminalNode *> SivertParser::StatContext::THEN() {
  return getTokens(SivertParser::THEN);
}

tree::TerminalNode* SivertParser::StatContext::THEN(size_t i) {
  return getToken(SivertParser::THEN, i);
}

std::vector<tree::TerminalNode *> SivertParser::StatContext::ELSEIF() {
  return getTokens(SivertParser::ELSEIF);
}

tree::TerminalNode* SivertParser::StatContext::ELSEIF(size_t i) {
  return getToken(SivertParser::ELSEIF, i);
}

tree::TerminalNode* SivertParser::StatContext::ELSE() {
  return getToken(SivertParser::ELSE, 0);
}

tree::TerminalNode* SivertParser::StatContext::FOR() {
  return getToken(SivertParser::FOR, 0);
}

std::vector<tree::TerminalNode *> SivertParser::StatContext::COMMA() {
  return getTokens(SivertParser::COMMA);
}

tree::TerminalNode* SivertParser::StatContext::COMMA(size_t i) {
  return getToken(SivertParser::COMMA, i);
}

SivertParser::NamelistContext* SivertParser::StatContext::namelist() {
  return getRuleContext<SivertParser::NamelistContext>(0);
}

tree::TerminalNode* SivertParser::StatContext::IN() {
  return getToken(SivertParser::IN, 0);
}

tree::TerminalNode* SivertParser::StatContext::FUNCTION() {
  return getToken(SivertParser::FUNCTION, 0);
}

SivertParser::FuncnameContext* SivertParser::StatContext::funcname() {
  return getRuleContext<SivertParser::FuncnameContext>(0);
}

SivertParser::FuncbodyContext* SivertParser::StatContext::funcbody() {
  return getRuleContext<SivertParser::FuncbodyContext>(0);
}

tree::TerminalNode* SivertParser::StatContext::LOCAL() {
  return getToken(SivertParser::LOCAL, 0);
}

SivertParser::AttnamelistContext* SivertParser::StatContext::attnamelist() {
  return getRuleContext<SivertParser::AttnamelistContext>(0);
}


size_t SivertParser::StatContext::getRuleIndex() const {
  return SivertParser::RuleStat;
}

void SivertParser::StatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStat(this);
}

void SivertParser::StatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStat(this);
}

SivertParser::StatContext* SivertParser::stat() {
  StatContext *_localctx = _tracker.createInstance<StatContext>(_ctx, getState());
  enterRule(_localctx, 6, SivertParser::RuleStat);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(147);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(66);
      match(SivertParser::SEMI);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(67);
      varlist();
      setState(68);
      match(SivertParser::EQ);
      setState(69);
      explist();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(71);
      functioncall(0);
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(72);
      label();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(73);
      match(SivertParser::BREAK);
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(74);
      match(SivertParser::GOTO);
      setState(75);
      match(SivertParser::NAME);
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(76);
      match(SivertParser::DO);
      setState(77);
      block();
      setState(78);
      match(SivertParser::END);
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(80);
      match(SivertParser::WHILE);
      setState(81);
      exp(0);
      setState(82);
      match(SivertParser::DO);
      setState(83);
      block();
      setState(84);
      match(SivertParser::END);
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(86);
      match(SivertParser::REPEAT);
      setState(87);
      block();
      setState(88);
      match(SivertParser::UNTIL);
      setState(89);
      exp(0);
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(91);
      match(SivertParser::IF);
      setState(92);
      exp(0);
      setState(93);
      match(SivertParser::THEN);
      setState(94);
      block();
      setState(102);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SivertParser::ELSEIF) {
        setState(95);
        match(SivertParser::ELSEIF);
        setState(96);
        exp(0);
        setState(97);
        match(SivertParser::THEN);
        setState(98);
        block();
        setState(104);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(107);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SivertParser::ELSE) {
        setState(105);
        match(SivertParser::ELSE);
        setState(106);
        block();
      }
      setState(109);
      match(SivertParser::END);
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(111);
      match(SivertParser::FOR);
      setState(112);
      match(SivertParser::NAME);
      setState(113);
      match(SivertParser::EQ);
      setState(114);
      exp(0);
      setState(115);
      match(SivertParser::COMMA);
      setState(116);
      exp(0);
      setState(119);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SivertParser::COMMA) {
        setState(117);
        match(SivertParser::COMMA);
        setState(118);
        exp(0);
      }
      setState(121);
      match(SivertParser::DO);
      setState(122);
      block();
      setState(123);
      match(SivertParser::END);
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(125);
      match(SivertParser::FOR);
      setState(126);
      namelist();
      setState(127);
      match(SivertParser::IN);
      setState(128);
      explist();
      setState(129);
      match(SivertParser::DO);
      setState(130);
      block();
      setState(131);
      match(SivertParser::END);
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(133);
      match(SivertParser::FUNCTION);
      setState(134);
      funcname();
      setState(135);
      funcbody();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(137);
      match(SivertParser::LOCAL);
      setState(138);
      match(SivertParser::FUNCTION);
      setState(139);
      match(SivertParser::NAME);
      setState(140);
      funcbody();
      break;
    }

    case 15: {
      enterOuterAlt(_localctx, 15);
      setState(141);
      match(SivertParser::LOCAL);
      setState(142);
      attnamelist();
      setState(145);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == SivertParser::EQ) {
        setState(143);
        match(SivertParser::EQ);
        setState(144);
        explist();
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttnamelistContext ------------------------------------------------------------------

SivertParser::AttnamelistContext::AttnamelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SivertParser::AttnamelistContext::NAME() {
  return getTokens(SivertParser::NAME);
}

tree::TerminalNode* SivertParser::AttnamelistContext::NAME(size_t i) {
  return getToken(SivertParser::NAME, i);
}

std::vector<SivertParser::AttribContext *> SivertParser::AttnamelistContext::attrib() {
  return getRuleContexts<SivertParser::AttribContext>();
}

SivertParser::AttribContext* SivertParser::AttnamelistContext::attrib(size_t i) {
  return getRuleContext<SivertParser::AttribContext>(i);
}

std::vector<tree::TerminalNode *> SivertParser::AttnamelistContext::COMMA() {
  return getTokens(SivertParser::COMMA);
}

tree::TerminalNode* SivertParser::AttnamelistContext::COMMA(size_t i) {
  return getToken(SivertParser::COMMA, i);
}


size_t SivertParser::AttnamelistContext::getRuleIndex() const {
  return SivertParser::RuleAttnamelist;
}

void SivertParser::AttnamelistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttnamelist(this);
}

void SivertParser::AttnamelistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttnamelist(this);
}

SivertParser::AttnamelistContext* SivertParser::attnamelist() {
  AttnamelistContext *_localctx = _tracker.createInstance<AttnamelistContext>(_ctx, getState());
  enterRule(_localctx, 8, SivertParser::RuleAttnamelist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(149);
    match(SivertParser::NAME);
    setState(150);
    attrib();
    setState(156);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SivertParser::COMMA) {
      setState(151);
      match(SivertParser::COMMA);
      setState(152);
      match(SivertParser::NAME);
      setState(153);
      attrib();
      setState(158);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AttribContext ------------------------------------------------------------------

SivertParser::AttribContext::AttribContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SivertParser::AttribContext::LT() {
  return getToken(SivertParser::LT, 0);
}

tree::TerminalNode* SivertParser::AttribContext::NAME() {
  return getToken(SivertParser::NAME, 0);
}

tree::TerminalNode* SivertParser::AttribContext::GT() {
  return getToken(SivertParser::GT, 0);
}


size_t SivertParser::AttribContext::getRuleIndex() const {
  return SivertParser::RuleAttrib;
}

void SivertParser::AttribContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAttrib(this);
}

void SivertParser::AttribContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAttrib(this);
}

SivertParser::AttribContext* SivertParser::attrib() {
  AttribContext *_localctx = _tracker.createInstance<AttribContext>(_ctx, getState());
  enterRule(_localctx, 10, SivertParser::RuleAttrib);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(162);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SivertParser::LT) {
      setState(159);
      match(SivertParser::LT);
      setState(160);
      match(SivertParser::NAME);
      setState(161);
      match(SivertParser::GT);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- RetstatContext ------------------------------------------------------------------

SivertParser::RetstatContext::RetstatContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SivertParser::RetstatContext::RETURN() {
  return getToken(SivertParser::RETURN, 0);
}

tree::TerminalNode* SivertParser::RetstatContext::BREAK() {
  return getToken(SivertParser::BREAK, 0);
}

tree::TerminalNode* SivertParser::RetstatContext::CONTINUE() {
  return getToken(SivertParser::CONTINUE, 0);
}

tree::TerminalNode* SivertParser::RetstatContext::SEMI() {
  return getToken(SivertParser::SEMI, 0);
}

SivertParser::ExplistContext* SivertParser::RetstatContext::explist() {
  return getRuleContext<SivertParser::ExplistContext>(0);
}


size_t SivertParser::RetstatContext::getRuleIndex() const {
  return SivertParser::RuleRetstat;
}

void SivertParser::RetstatContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterRetstat(this);
}

void SivertParser::RetstatContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitRetstat(this);
}

SivertParser::RetstatContext* SivertParser::retstat() {
  RetstatContext *_localctx = _tracker.createInstance<RetstatContext>(_ctx, getState());
  enterRule(_localctx, 12, SivertParser::RuleRetstat);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(170);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SivertParser::RETURN: {
        setState(164);
        match(SivertParser::RETURN);
        setState(166);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 17) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 17)) & 280650879957889) != 0)) {
          setState(165);
          explist();
        }
        break;
      }

      case SivertParser::BREAK: {
        setState(168);
        match(SivertParser::BREAK);
        break;
      }

      case SivertParser::CONTINUE: {
        setState(169);
        match(SivertParser::CONTINUE);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    setState(173);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SivertParser::SEMI) {
      setState(172);
      match(SivertParser::SEMI);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

SivertParser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SivertParser::LabelContext::CC() {
  return getTokens(SivertParser::CC);
}

tree::TerminalNode* SivertParser::LabelContext::CC(size_t i) {
  return getToken(SivertParser::CC, i);
}

tree::TerminalNode* SivertParser::LabelContext::NAME() {
  return getToken(SivertParser::NAME, 0);
}


size_t SivertParser::LabelContext::getRuleIndex() const {
  return SivertParser::RuleLabel;
}

void SivertParser::LabelContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterLabel(this);
}

void SivertParser::LabelContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitLabel(this);
}

SivertParser::LabelContext* SivertParser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 14, SivertParser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(175);
    match(SivertParser::CC);
    setState(176);
    match(SivertParser::NAME);
    setState(177);
    match(SivertParser::CC);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncnameContext ------------------------------------------------------------------

SivertParser::FuncnameContext::FuncnameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SivertParser::FuncnameContext::NAME() {
  return getTokens(SivertParser::NAME);
}

tree::TerminalNode* SivertParser::FuncnameContext::NAME(size_t i) {
  return getToken(SivertParser::NAME, i);
}

std::vector<tree::TerminalNode *> SivertParser::FuncnameContext::DOT() {
  return getTokens(SivertParser::DOT);
}

tree::TerminalNode* SivertParser::FuncnameContext::DOT(size_t i) {
  return getToken(SivertParser::DOT, i);
}

tree::TerminalNode* SivertParser::FuncnameContext::COL() {
  return getToken(SivertParser::COL, 0);
}


size_t SivertParser::FuncnameContext::getRuleIndex() const {
  return SivertParser::RuleFuncname;
}

void SivertParser::FuncnameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncname(this);
}

void SivertParser::FuncnameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncname(this);
}

SivertParser::FuncnameContext* SivertParser::funcname() {
  FuncnameContext *_localctx = _tracker.createInstance<FuncnameContext>(_ctx, getState());
  enterRule(_localctx, 16, SivertParser::RuleFuncname);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(179);
    match(SivertParser::NAME);
    setState(184);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SivertParser::DOT) {
      setState(180);
      match(SivertParser::DOT);
      setState(181);
      match(SivertParser::NAME);
      setState(186);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(189);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SivertParser::COL) {
      setState(187);
      match(SivertParser::COL);
      setState(188);
      match(SivertParser::NAME);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- VarlistContext ------------------------------------------------------------------

SivertParser::VarlistContext::VarlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SivertParser::VarContext *> SivertParser::VarlistContext::var() {
  return getRuleContexts<SivertParser::VarContext>();
}

SivertParser::VarContext* SivertParser::VarlistContext::var(size_t i) {
  return getRuleContext<SivertParser::VarContext>(i);
}

std::vector<tree::TerminalNode *> SivertParser::VarlistContext::COMMA() {
  return getTokens(SivertParser::COMMA);
}

tree::TerminalNode* SivertParser::VarlistContext::COMMA(size_t i) {
  return getToken(SivertParser::COMMA, i);
}


size_t SivertParser::VarlistContext::getRuleIndex() const {
  return SivertParser::RuleVarlist;
}

void SivertParser::VarlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVarlist(this);
}

void SivertParser::VarlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVarlist(this);
}

SivertParser::VarlistContext* SivertParser::varlist() {
  VarlistContext *_localctx = _tracker.createInstance<VarlistContext>(_ctx, getState());
  enterRule(_localctx, 18, SivertParser::RuleVarlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(191);
    var();
    setState(196);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SivertParser::COMMA) {
      setState(192);
      match(SivertParser::COMMA);
      setState(193);
      var();
      setState(198);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NamelistContext ------------------------------------------------------------------

SivertParser::NamelistContext::NamelistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SivertParser::NamelistContext::NAME() {
  return getTokens(SivertParser::NAME);
}

tree::TerminalNode* SivertParser::NamelistContext::NAME(size_t i) {
  return getToken(SivertParser::NAME, i);
}

std::vector<tree::TerminalNode *> SivertParser::NamelistContext::COMMA() {
  return getTokens(SivertParser::COMMA);
}

tree::TerminalNode* SivertParser::NamelistContext::COMMA(size_t i) {
  return getToken(SivertParser::COMMA, i);
}


size_t SivertParser::NamelistContext::getRuleIndex() const {
  return SivertParser::RuleNamelist;
}

void SivertParser::NamelistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNamelist(this);
}

void SivertParser::NamelistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNamelist(this);
}

SivertParser::NamelistContext* SivertParser::namelist() {
  NamelistContext *_localctx = _tracker.createInstance<NamelistContext>(_ctx, getState());
  enterRule(_localctx, 20, SivertParser::RuleNamelist);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(199);
    match(SivertParser::NAME);
    setState(204);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(200);
        match(SivertParser::COMMA);
        setState(201);
        match(SivertParser::NAME); 
      }
      setState(206);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExplistContext ------------------------------------------------------------------

SivertParser::ExplistContext::ExplistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SivertParser::ExpContext *> SivertParser::ExplistContext::exp() {
  return getRuleContexts<SivertParser::ExpContext>();
}

SivertParser::ExpContext* SivertParser::ExplistContext::exp(size_t i) {
  return getRuleContext<SivertParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> SivertParser::ExplistContext::COMMA() {
  return getTokens(SivertParser::COMMA);
}

tree::TerminalNode* SivertParser::ExplistContext::COMMA(size_t i) {
  return getToken(SivertParser::COMMA, i);
}


size_t SivertParser::ExplistContext::getRuleIndex() const {
  return SivertParser::RuleExplist;
}

void SivertParser::ExplistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExplist(this);
}

void SivertParser::ExplistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExplist(this);
}

SivertParser::ExplistContext* SivertParser::explist() {
  ExplistContext *_localctx = _tracker.createInstance<ExplistContext>(_ctx, getState());
  enterRule(_localctx, 22, SivertParser::RuleExplist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(207);
    exp(0);
    setState(212);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == SivertParser::COMMA) {
      setState(208);
      match(SivertParser::COMMA);
      setState(209);
      exp(0);
      setState(214);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpContext ------------------------------------------------------------------

SivertParser::ExpContext::ExpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SivertParser::ExpContext::NIL() {
  return getToken(SivertParser::NIL, 0);
}

tree::TerminalNode* SivertParser::ExpContext::FALSE() {
  return getToken(SivertParser::FALSE, 0);
}

tree::TerminalNode* SivertParser::ExpContext::TRUE() {
  return getToken(SivertParser::TRUE, 0);
}

SivertParser::NumberContext* SivertParser::ExpContext::number() {
  return getRuleContext<SivertParser::NumberContext>(0);
}

SivertParser::StringContext* SivertParser::ExpContext::string() {
  return getRuleContext<SivertParser::StringContext>(0);
}

tree::TerminalNode* SivertParser::ExpContext::DDD() {
  return getToken(SivertParser::DDD, 0);
}

SivertParser::FunctiondefContext* SivertParser::ExpContext::functiondef() {
  return getRuleContext<SivertParser::FunctiondefContext>(0);
}

SivertParser::PrefixexpContext* SivertParser::ExpContext::prefixexp() {
  return getRuleContext<SivertParser::PrefixexpContext>(0);
}

SivertParser::TableconstructorContext* SivertParser::ExpContext::tableconstructor() {
  return getRuleContext<SivertParser::TableconstructorContext>(0);
}

std::vector<SivertParser::ExpContext *> SivertParser::ExpContext::exp() {
  return getRuleContexts<SivertParser::ExpContext>();
}

SivertParser::ExpContext* SivertParser::ExpContext::exp(size_t i) {
  return getRuleContext<SivertParser::ExpContext>(i);
}

tree::TerminalNode* SivertParser::ExpContext::NOT() {
  return getToken(SivertParser::NOT, 0);
}

tree::TerminalNode* SivertParser::ExpContext::POUND() {
  return getToken(SivertParser::POUND, 0);
}

tree::TerminalNode* SivertParser::ExpContext::MINUS() {
  return getToken(SivertParser::MINUS, 0);
}

tree::TerminalNode* SivertParser::ExpContext::SQUIG() {
  return getToken(SivertParser::SQUIG, 0);
}

tree::TerminalNode* SivertParser::ExpContext::CARET() {
  return getToken(SivertParser::CARET, 0);
}

tree::TerminalNode* SivertParser::ExpContext::STAR() {
  return getToken(SivertParser::STAR, 0);
}

tree::TerminalNode* SivertParser::ExpContext::SLASH() {
  return getToken(SivertParser::SLASH, 0);
}

tree::TerminalNode* SivertParser::ExpContext::PER() {
  return getToken(SivertParser::PER, 0);
}

tree::TerminalNode* SivertParser::ExpContext::SS() {
  return getToken(SivertParser::SS, 0);
}

tree::TerminalNode* SivertParser::ExpContext::PLUS() {
  return getToken(SivertParser::PLUS, 0);
}

tree::TerminalNode* SivertParser::ExpContext::DD() {
  return getToken(SivertParser::DD, 0);
}

tree::TerminalNode* SivertParser::ExpContext::LT() {
  return getToken(SivertParser::LT, 0);
}

tree::TerminalNode* SivertParser::ExpContext::GT() {
  return getToken(SivertParser::GT, 0);
}

tree::TerminalNode* SivertParser::ExpContext::LE() {
  return getToken(SivertParser::LE, 0);
}

tree::TerminalNode* SivertParser::ExpContext::GE() {
  return getToken(SivertParser::GE, 0);
}

tree::TerminalNode* SivertParser::ExpContext::SQEQ() {
  return getToken(SivertParser::SQEQ, 0);
}

tree::TerminalNode* SivertParser::ExpContext::EE() {
  return getToken(SivertParser::EE, 0);
}

tree::TerminalNode* SivertParser::ExpContext::AND() {
  return getToken(SivertParser::AND, 0);
}

tree::TerminalNode* SivertParser::ExpContext::OR() {
  return getToken(SivertParser::OR, 0);
}

tree::TerminalNode* SivertParser::ExpContext::AMP() {
  return getToken(SivertParser::AMP, 0);
}

tree::TerminalNode* SivertParser::ExpContext::PIPE() {
  return getToken(SivertParser::PIPE, 0);
}

tree::TerminalNode* SivertParser::ExpContext::LL() {
  return getToken(SivertParser::LL, 0);
}

tree::TerminalNode* SivertParser::ExpContext::GG() {
  return getToken(SivertParser::GG, 0);
}


size_t SivertParser::ExpContext::getRuleIndex() const {
  return SivertParser::RuleExp;
}

void SivertParser::ExpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExp(this);
}

void SivertParser::ExpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExp(this);
}


SivertParser::ExpContext* SivertParser::exp() {
   return exp(0);
}

SivertParser::ExpContext* SivertParser::exp(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SivertParser::ExpContext *_localctx = _tracker.createInstance<ExpContext>(_ctx, parentState);
  SivertParser::ExpContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 24;
  enterRecursionRule(_localctx, 24, SivertParser::RuleExp, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(227);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SivertParser::NIL: {
        setState(216);
        match(SivertParser::NIL);
        break;
      }

      case SivertParser::FALSE: {
        setState(217);
        match(SivertParser::FALSE);
        break;
      }

      case SivertParser::TRUE: {
        setState(218);
        match(SivertParser::TRUE);
        break;
      }

      case SivertParser::INT:
      case SivertParser::HEX:
      case SivertParser::FLOAT:
      case SivertParser::HEX_FLOAT: {
        setState(219);
        number();
        break;
      }

      case SivertParser::NORMALSTRING:
      case SivertParser::CHARSTRING:
      case SivertParser::LONGSTRING: {
        setState(220);
        string();
        break;
      }

      case SivertParser::DDD: {
        setState(221);
        match(SivertParser::DDD);
        break;
      }

      case SivertParser::FUNCTION: {
        setState(222);
        functiondef();
        break;
      }

      case SivertParser::OP:
      case SivertParser::NAME: {
        setState(223);
        prefixexp();
        break;
      }

      case SivertParser::OCU: {
        setState(224);
        tableconstructor();
        break;
      }

      case SivertParser::SQUIG:
      case SivertParser::MINUS:
      case SivertParser::POUND:
      case SivertParser::NOT: {
        setState(225);
        _la = _input->LA(1);
        if (!((((_la & ~ 0x3fULL) == 0) &&
          ((1ULL << _la) & 10468982784) != 0))) {
        _errHandler->recoverInline(this);
        }
        else {
          _errHandler->reportMatch(this);
          consume();
        }
        setState(226);
        exp(8);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(255);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(253);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(229);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");

          setState(230);
          match(SivertParser::CARET);
          setState(231);
          exp(9);
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(232);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(233);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 18049995198431232) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(234);
          exp(8);
          break;
        }

        case 3: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(235);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(236);
          _la = _input->LA(1);
          if (!(_la == SivertParser::MINUS

          || _la == SivertParser::PLUS)) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(237);
          exp(7);
          break;
        }

        case 4: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(238);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");

          setState(239);
          match(SivertParser::DD);
          setState(240);
          exp(5);
          break;
        }

        case 5: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(241);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(242);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 73186792481226752) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(243);
          exp(5);
          break;
        }

        case 6: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(244);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");

          setState(245);
          match(SivertParser::AND);
          setState(246);
          exp(4);
          break;
        }

        case 7: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(247);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");

          setState(248);
          match(SivertParser::OR);
          setState(249);
          exp(3);
          break;
        }

        case 8: {
          _localctx = _tracker.createInstance<ExpContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleExp);
          setState(250);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(251);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 4503720154890240) != 0))) {
          _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(252);
          exp(2);
          break;
        }

        default:
          break;
        } 
      }
      setState(257);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- VarContext ------------------------------------------------------------------

SivertParser::VarContext::VarContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SivertParser::VarContext::NAME() {
  return getToken(SivertParser::NAME, 0);
}

SivertParser::PrefixexpContext* SivertParser::VarContext::prefixexp() {
  return getRuleContext<SivertParser::PrefixexpContext>(0);
}

tree::TerminalNode* SivertParser::VarContext::OB() {
  return getToken(SivertParser::OB, 0);
}

SivertParser::ExpContext* SivertParser::VarContext::exp() {
  return getRuleContext<SivertParser::ExpContext>(0);
}

tree::TerminalNode* SivertParser::VarContext::CB() {
  return getToken(SivertParser::CB, 0);
}

tree::TerminalNode* SivertParser::VarContext::DOT() {
  return getToken(SivertParser::DOT, 0);
}


size_t SivertParser::VarContext::getRuleIndex() const {
  return SivertParser::RuleVar;
}

void SivertParser::VarContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterVar(this);
}

void SivertParser::VarContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitVar(this);
}

SivertParser::VarContext* SivertParser::var() {
  VarContext *_localctx = _tracker.createInstance<VarContext>(_ctx, getState());
  enterRule(_localctx, 26, SivertParser::RuleVar);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(268);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(258);
      match(SivertParser::NAME);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(259);
      prefixexp();
      setState(266);
      _errHandler->sync(this);
      switch (_input->LA(1)) {
        case SivertParser::OB: {
          setState(260);
          match(SivertParser::OB);
          setState(261);
          exp(0);
          setState(262);
          match(SivertParser::CB);
          break;
        }

        case SivertParser::DOT: {
          setState(264);
          match(SivertParser::DOT);
          setState(265);
          match(SivertParser::NAME);
          break;
        }

      default:
        throw NoViableAltException(this);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- PrefixexpContext ------------------------------------------------------------------

SivertParser::PrefixexpContext::PrefixexpContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SivertParser::PrefixexpContext::NAME() {
  return getTokens(SivertParser::NAME);
}

tree::TerminalNode* SivertParser::PrefixexpContext::NAME(size_t i) {
  return getToken(SivertParser::NAME, i);
}

std::vector<tree::TerminalNode *> SivertParser::PrefixexpContext::OB() {
  return getTokens(SivertParser::OB);
}

tree::TerminalNode* SivertParser::PrefixexpContext::OB(size_t i) {
  return getToken(SivertParser::OB, i);
}

std::vector<SivertParser::ExpContext *> SivertParser::PrefixexpContext::exp() {
  return getRuleContexts<SivertParser::ExpContext>();
}

SivertParser::ExpContext* SivertParser::PrefixexpContext::exp(size_t i) {
  return getRuleContext<SivertParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> SivertParser::PrefixexpContext::CB() {
  return getTokens(SivertParser::CB);
}

tree::TerminalNode* SivertParser::PrefixexpContext::CB(size_t i) {
  return getToken(SivertParser::CB, i);
}

std::vector<tree::TerminalNode *> SivertParser::PrefixexpContext::DOT() {
  return getTokens(SivertParser::DOT);
}

tree::TerminalNode* SivertParser::PrefixexpContext::DOT(size_t i) {
  return getToken(SivertParser::DOT, i);
}

SivertParser::FunctioncallContext* SivertParser::PrefixexpContext::functioncall() {
  return getRuleContext<SivertParser::FunctioncallContext>(0);
}

tree::TerminalNode* SivertParser::PrefixexpContext::OP() {
  return getToken(SivertParser::OP, 0);
}

tree::TerminalNode* SivertParser::PrefixexpContext::CP() {
  return getToken(SivertParser::CP, 0);
}


size_t SivertParser::PrefixexpContext::getRuleIndex() const {
  return SivertParser::RulePrefixexp;
}

void SivertParser::PrefixexpContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPrefixexp(this);
}

void SivertParser::PrefixexpContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPrefixexp(this);
}

SivertParser::PrefixexpContext* SivertParser::prefixexp() {
  PrefixexpContext *_localctx = _tracker.createInstance<PrefixexpContext>(_ctx, getState());
  enterRule(_localctx, 28, SivertParser::RulePrefixexp);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    setState(308);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 28, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(270);
      match(SivertParser::NAME);
      setState(279);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(277);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case SivertParser::OB: {
              setState(271);
              match(SivertParser::OB);
              setState(272);
              exp(0);
              setState(273);
              match(SivertParser::CB);
              break;
            }

            case SivertParser::DOT: {
              setState(275);
              match(SivertParser::DOT);
              setState(276);
              match(SivertParser::NAME);
              break;
            }

          default:
            throw NoViableAltException(this);
          } 
        }
        setState(281);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx);
      }
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(282);
      functioncall(0);
      setState(291);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(289);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case SivertParser::OB: {
              setState(283);
              match(SivertParser::OB);
              setState(284);
              exp(0);
              setState(285);
              match(SivertParser::CB);
              break;
            }

            case SivertParser::DOT: {
              setState(287);
              match(SivertParser::DOT);
              setState(288);
              match(SivertParser::NAME);
              break;
            }

          default:
            throw NoViableAltException(this);
          } 
        }
        setState(293);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
      }
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(294);
      match(SivertParser::OP);
      setState(295);
      exp(0);
      setState(296);
      match(SivertParser::CP);
      setState(305);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(303);
          _errHandler->sync(this);
          switch (_input->LA(1)) {
            case SivertParser::OB: {
              setState(297);
              match(SivertParser::OB);
              setState(298);
              exp(0);
              setState(299);
              match(SivertParser::CB);
              break;
            }

            case SivertParser::DOT: {
              setState(301);
              match(SivertParser::DOT);
              setState(302);
              match(SivertParser::NAME);
              break;
            }

          default:
            throw NoViableAltException(this);
          } 
        }
        setState(307);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
      }
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctioncallContext ------------------------------------------------------------------

SivertParser::FunctioncallContext::FunctioncallContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> SivertParser::FunctioncallContext::NAME() {
  return getTokens(SivertParser::NAME);
}

tree::TerminalNode* SivertParser::FunctioncallContext::NAME(size_t i) {
  return getToken(SivertParser::NAME, i);
}

SivertParser::ArgsContext* SivertParser::FunctioncallContext::args() {
  return getRuleContext<SivertParser::ArgsContext>(0);
}

std::vector<tree::TerminalNode *> SivertParser::FunctioncallContext::OB() {
  return getTokens(SivertParser::OB);
}

tree::TerminalNode* SivertParser::FunctioncallContext::OB(size_t i) {
  return getToken(SivertParser::OB, i);
}

std::vector<SivertParser::ExpContext *> SivertParser::FunctioncallContext::exp() {
  return getRuleContexts<SivertParser::ExpContext>();
}

SivertParser::ExpContext* SivertParser::FunctioncallContext::exp(size_t i) {
  return getRuleContext<SivertParser::ExpContext>(i);
}

std::vector<tree::TerminalNode *> SivertParser::FunctioncallContext::CB() {
  return getTokens(SivertParser::CB);
}

tree::TerminalNode* SivertParser::FunctioncallContext::CB(size_t i) {
  return getToken(SivertParser::CB, i);
}

std::vector<tree::TerminalNode *> SivertParser::FunctioncallContext::DOT() {
  return getTokens(SivertParser::DOT);
}

tree::TerminalNode* SivertParser::FunctioncallContext::DOT(size_t i) {
  return getToken(SivertParser::DOT, i);
}

tree::TerminalNode* SivertParser::FunctioncallContext::OP() {
  return getToken(SivertParser::OP, 0);
}

tree::TerminalNode* SivertParser::FunctioncallContext::CP() {
  return getToken(SivertParser::CP, 0);
}

tree::TerminalNode* SivertParser::FunctioncallContext::COL() {
  return getToken(SivertParser::COL, 0);
}

SivertParser::FunctioncallContext* SivertParser::FunctioncallContext::functioncall() {
  return getRuleContext<SivertParser::FunctioncallContext>(0);
}


size_t SivertParser::FunctioncallContext::getRuleIndex() const {
  return SivertParser::RuleFunctioncall;
}

void SivertParser::FunctioncallContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctioncall(this);
}

void SivertParser::FunctioncallContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctioncall(this);
}


SivertParser::FunctioncallContext* SivertParser::functioncall() {
   return functioncall(0);
}

SivertParser::FunctioncallContext* SivertParser::functioncall(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  SivertParser::FunctioncallContext *_localctx = _tracker.createInstance<FunctioncallContext>(_ctx, parentState);
  SivertParser::FunctioncallContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 30;
  enterRecursionRule(_localctx, 30, SivertParser::RuleFunctioncall, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(373);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 37, _ctx)) {
    case 1: {
      setState(311);
      match(SivertParser::NAME);
      setState(320);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SivertParser::DOT

      || _la == SivertParser::OB) {
        setState(318);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SivertParser::OB: {
            setState(312);
            match(SivertParser::OB);
            setState(313);
            exp(0);
            setState(314);
            match(SivertParser::CB);
            break;
          }

          case SivertParser::DOT: {
            setState(316);
            match(SivertParser::DOT);
            setState(317);
            match(SivertParser::NAME);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(322);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(323);
      args();
      break;
    }

    case 2: {
      setState(324);
      match(SivertParser::OP);
      setState(325);
      exp(0);
      setState(326);
      match(SivertParser::CP);
      setState(335);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SivertParser::DOT

      || _la == SivertParser::OB) {
        setState(333);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SivertParser::OB: {
            setState(327);
            match(SivertParser::OB);
            setState(328);
            exp(0);
            setState(329);
            match(SivertParser::CB);
            break;
          }

          case SivertParser::DOT: {
            setState(331);
            match(SivertParser::DOT);
            setState(332);
            match(SivertParser::NAME);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(337);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(338);
      args();
      break;
    }

    case 3: {
      setState(340);
      match(SivertParser::NAME);
      setState(349);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SivertParser::DOT

      || _la == SivertParser::OB) {
        setState(347);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SivertParser::OB: {
            setState(341);
            match(SivertParser::OB);
            setState(342);
            exp(0);
            setState(343);
            match(SivertParser::CB);
            break;
          }

          case SivertParser::DOT: {
            setState(345);
            match(SivertParser::DOT);
            setState(346);
            match(SivertParser::NAME);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(351);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(352);
      match(SivertParser::COL);
      setState(353);
      match(SivertParser::NAME);
      setState(354);
      args();
      break;
    }

    case 4: {
      setState(355);
      match(SivertParser::OP);
      setState(356);
      exp(0);
      setState(357);
      match(SivertParser::CP);
      setState(366);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == SivertParser::DOT

      || _la == SivertParser::OB) {
        setState(364);
        _errHandler->sync(this);
        switch (_input->LA(1)) {
          case SivertParser::OB: {
            setState(358);
            match(SivertParser::OB);
            setState(359);
            exp(0);
            setState(360);
            match(SivertParser::CB);
            break;
          }

          case SivertParser::DOT: {
            setState(362);
            match(SivertParser::DOT);
            setState(363);
            match(SivertParser::NAME);
            break;
          }

        default:
          throw NoViableAltException(this);
        }
        setState(368);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
      setState(369);
      match(SivertParser::COL);
      setState(370);
      match(SivertParser::NAME);
      setState(371);
      args();
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(405);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(403);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx)) {
        case 1: {
          _localctx = _tracker.createInstance<FunctioncallContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleFunctioncall);
          setState(375);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(384);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SivertParser::DOT

          || _la == SivertParser::OB) {
            setState(382);
            _errHandler->sync(this);
            switch (_input->LA(1)) {
              case SivertParser::OB: {
                setState(376);
                match(SivertParser::OB);
                setState(377);
                exp(0);
                setState(378);
                match(SivertParser::CB);
                break;
              }

              case SivertParser::DOT: {
                setState(380);
                match(SivertParser::DOT);
                setState(381);
                match(SivertParser::NAME);
                break;
              }

            default:
              throw NoViableAltException(this);
            }
            setState(386);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(387);
          args();
          break;
        }

        case 2: {
          _localctx = _tracker.createInstance<FunctioncallContext>(parentContext, parentState);
          pushNewRecursionContext(_localctx, startState, RuleFunctioncall);
          setState(388);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(397);
          _errHandler->sync(this);
          _la = _input->LA(1);
          while (_la == SivertParser::DOT

          || _la == SivertParser::OB) {
            setState(395);
            _errHandler->sync(this);
            switch (_input->LA(1)) {
              case SivertParser::OB: {
                setState(389);
                match(SivertParser::OB);
                setState(390);
                exp(0);
                setState(391);
                match(SivertParser::CB);
                break;
              }

              case SivertParser::DOT: {
                setState(393);
                match(SivertParser::DOT);
                setState(394);
                match(SivertParser::NAME);
                break;
              }

            default:
              throw NoViableAltException(this);
            }
            setState(399);
            _errHandler->sync(this);
            _la = _input->LA(1);
          }
          setState(400);
          match(SivertParser::COL);
          setState(401);
          match(SivertParser::NAME);
          setState(402);
          args();
          break;
        }

        default:
          break;
        } 
      }
      setState(407);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ArgsContext ------------------------------------------------------------------

SivertParser::ArgsContext::ArgsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SivertParser::ArgsContext::OP() {
  return getToken(SivertParser::OP, 0);
}

tree::TerminalNode* SivertParser::ArgsContext::CP() {
  return getToken(SivertParser::CP, 0);
}

SivertParser::ExplistContext* SivertParser::ArgsContext::explist() {
  return getRuleContext<SivertParser::ExplistContext>(0);
}

SivertParser::TableconstructorContext* SivertParser::ArgsContext::tableconstructor() {
  return getRuleContext<SivertParser::TableconstructorContext>(0);
}

SivertParser::StringContext* SivertParser::ArgsContext::string() {
  return getRuleContext<SivertParser::StringContext>(0);
}


size_t SivertParser::ArgsContext::getRuleIndex() const {
  return SivertParser::RuleArgs;
}

void SivertParser::ArgsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterArgs(this);
}

void SivertParser::ArgsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitArgs(this);
}

SivertParser::ArgsContext* SivertParser::args() {
  ArgsContext *_localctx = _tracker.createInstance<ArgsContext>(_ctx, getState());
  enterRule(_localctx, 32, SivertParser::RuleArgs);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(415);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SivertParser::OP: {
        enterOuterAlt(_localctx, 1);
        setState(408);
        match(SivertParser::OP);
        setState(410);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (((((_la - 17) & ~ 0x3fULL) == 0) &&
          ((1ULL << (_la - 17)) & 280650879957889) != 0)) {
          setState(409);
          explist();
        }
        setState(412);
        match(SivertParser::CP);
        break;
      }

      case SivertParser::OCU: {
        enterOuterAlt(_localctx, 2);
        setState(413);
        tableconstructor();
        break;
      }

      case SivertParser::NORMALSTRING:
      case SivertParser::CHARSTRING:
      case SivertParser::LONGSTRING: {
        enterOuterAlt(_localctx, 3);
        setState(414);
        string();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FunctiondefContext ------------------------------------------------------------------

SivertParser::FunctiondefContext::FunctiondefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SivertParser::FunctiondefContext::FUNCTION() {
  return getToken(SivertParser::FUNCTION, 0);
}

SivertParser::FuncbodyContext* SivertParser::FunctiondefContext::funcbody() {
  return getRuleContext<SivertParser::FuncbodyContext>(0);
}


size_t SivertParser::FunctiondefContext::getRuleIndex() const {
  return SivertParser::RuleFunctiondef;
}

void SivertParser::FunctiondefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFunctiondef(this);
}

void SivertParser::FunctiondefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFunctiondef(this);
}

SivertParser::FunctiondefContext* SivertParser::functiondef() {
  FunctiondefContext *_localctx = _tracker.createInstance<FunctiondefContext>(_ctx, getState());
  enterRule(_localctx, 34, SivertParser::RuleFunctiondef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(417);
    match(SivertParser::FUNCTION);
    setState(418);
    funcbody();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FuncbodyContext ------------------------------------------------------------------

SivertParser::FuncbodyContext::FuncbodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SivertParser::FuncbodyContext::OP() {
  return getToken(SivertParser::OP, 0);
}

SivertParser::ParlistContext* SivertParser::FuncbodyContext::parlist() {
  return getRuleContext<SivertParser::ParlistContext>(0);
}

tree::TerminalNode* SivertParser::FuncbodyContext::CP() {
  return getToken(SivertParser::CP, 0);
}

SivertParser::BlockContext* SivertParser::FuncbodyContext::block() {
  return getRuleContext<SivertParser::BlockContext>(0);
}

tree::TerminalNode* SivertParser::FuncbodyContext::END() {
  return getToken(SivertParser::END, 0);
}


size_t SivertParser::FuncbodyContext::getRuleIndex() const {
  return SivertParser::RuleFuncbody;
}

void SivertParser::FuncbodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFuncbody(this);
}

void SivertParser::FuncbodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFuncbody(this);
}

SivertParser::FuncbodyContext* SivertParser::funcbody() {
  FuncbodyContext *_localctx = _tracker.createInstance<FuncbodyContext>(_ctx, getState());
  enterRule(_localctx, 36, SivertParser::RuleFuncbody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(420);
    match(SivertParser::OP);
    setState(421);
    parlist();
    setState(422);
    match(SivertParser::CP);
    setState(423);
    block();
    setState(424);
    match(SivertParser::END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParlistContext ------------------------------------------------------------------

SivertParser::ParlistContext::ParlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

SivertParser::NamelistContext* SivertParser::ParlistContext::namelist() {
  return getRuleContext<SivertParser::NamelistContext>(0);
}

tree::TerminalNode* SivertParser::ParlistContext::COMMA() {
  return getToken(SivertParser::COMMA, 0);
}

tree::TerminalNode* SivertParser::ParlistContext::DDD() {
  return getToken(SivertParser::DDD, 0);
}


size_t SivertParser::ParlistContext::getRuleIndex() const {
  return SivertParser::RuleParlist;
}

void SivertParser::ParlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParlist(this);
}

void SivertParser::ParlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParlist(this);
}

SivertParser::ParlistContext* SivertParser::parlist() {
  ParlistContext *_localctx = _tracker.createInstance<ParlistContext>(_ctx, getState());
  enterRule(_localctx, 38, SivertParser::RuleParlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(433);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case SivertParser::NAME: {
        enterOuterAlt(_localctx, 1);
        setState(426);
        namelist();
        setState(429);
        _errHandler->sync(this);

        _la = _input->LA(1);
        if (_la == SivertParser::COMMA) {
          setState(427);
          match(SivertParser::COMMA);
          setState(428);
          match(SivertParser::DDD);
        }
        break;
      }

      case SivertParser::DDD: {
        enterOuterAlt(_localctx, 2);
        setState(431);
        match(SivertParser::DDD);
        break;
      }

      case SivertParser::CP: {
        enterOuterAlt(_localctx, 3);

        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TableconstructorContext ------------------------------------------------------------------

SivertParser::TableconstructorContext::TableconstructorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SivertParser::TableconstructorContext::OCU() {
  return getToken(SivertParser::OCU, 0);
}

tree::TerminalNode* SivertParser::TableconstructorContext::CCU() {
  return getToken(SivertParser::CCU, 0);
}

SivertParser::FieldlistContext* SivertParser::TableconstructorContext::fieldlist() {
  return getRuleContext<SivertParser::FieldlistContext>(0);
}


size_t SivertParser::TableconstructorContext::getRuleIndex() const {
  return SivertParser::RuleTableconstructor;
}

void SivertParser::TableconstructorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTableconstructor(this);
}

void SivertParser::TableconstructorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTableconstructor(this);
}

SivertParser::TableconstructorContext* SivertParser::tableconstructor() {
  TableconstructorContext *_localctx = _tracker.createInstance<TableconstructorContext>(_ctx, getState());
  enterRule(_localctx, 40, SivertParser::RuleTableconstructor);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(435);
    match(SivertParser::OCU);
    setState(437);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 17) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 17)) & 280653027441537) != 0)) {
      setState(436);
      fieldlist();
    }
    setState(439);
    match(SivertParser::CCU);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldlistContext ------------------------------------------------------------------

SivertParser::FieldlistContext::FieldlistContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<SivertParser::FieldContext *> SivertParser::FieldlistContext::field() {
  return getRuleContexts<SivertParser::FieldContext>();
}

SivertParser::FieldContext* SivertParser::FieldlistContext::field(size_t i) {
  return getRuleContext<SivertParser::FieldContext>(i);
}

std::vector<SivertParser::FieldsepContext *> SivertParser::FieldlistContext::fieldsep() {
  return getRuleContexts<SivertParser::FieldsepContext>();
}

SivertParser::FieldsepContext* SivertParser::FieldlistContext::fieldsep(size_t i) {
  return getRuleContext<SivertParser::FieldsepContext>(i);
}


size_t SivertParser::FieldlistContext::getRuleIndex() const {
  return SivertParser::RuleFieldlist;
}

void SivertParser::FieldlistContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldlist(this);
}

void SivertParser::FieldlistContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldlist(this);
}

SivertParser::FieldlistContext* SivertParser::fieldlist() {
  FieldlistContext *_localctx = _tracker.createInstance<FieldlistContext>(_ctx, getState());
  enterRule(_localctx, 42, SivertParser::RuleFieldlist);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(441);
    field();
    setState(447);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(442);
        fieldsep();
        setState(443);
        field(); 
      }
      setState(449);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    }
    setState(451);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == SivertParser::SEMI

    || _la == SivertParser::COMMA) {
      setState(450);
      fieldsep();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldContext ------------------------------------------------------------------

SivertParser::FieldContext::FieldContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SivertParser::FieldContext::OB() {
  return getToken(SivertParser::OB, 0);
}

std::vector<SivertParser::ExpContext *> SivertParser::FieldContext::exp() {
  return getRuleContexts<SivertParser::ExpContext>();
}

SivertParser::ExpContext* SivertParser::FieldContext::exp(size_t i) {
  return getRuleContext<SivertParser::ExpContext>(i);
}

tree::TerminalNode* SivertParser::FieldContext::CB() {
  return getToken(SivertParser::CB, 0);
}

tree::TerminalNode* SivertParser::FieldContext::EQ() {
  return getToken(SivertParser::EQ, 0);
}

tree::TerminalNode* SivertParser::FieldContext::NAME() {
  return getToken(SivertParser::NAME, 0);
}


size_t SivertParser::FieldContext::getRuleIndex() const {
  return SivertParser::RuleField;
}

void SivertParser::FieldContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterField(this);
}

void SivertParser::FieldContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitField(this);
}

SivertParser::FieldContext* SivertParser::field() {
  FieldContext *_localctx = _tracker.createInstance<FieldContext>(_ctx, getState());
  enterRule(_localctx, 44, SivertParser::RuleField);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(463);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 51, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(453);
      match(SivertParser::OB);
      setState(454);
      exp(0);
      setState(455);
      match(SivertParser::CB);
      setState(456);
      match(SivertParser::EQ);
      setState(457);
      exp(0);
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(459);
      match(SivertParser::NAME);
      setState(460);
      match(SivertParser::EQ);
      setState(461);
      exp(0);
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(462);
      exp(0);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- FieldsepContext ------------------------------------------------------------------

SivertParser::FieldsepContext::FieldsepContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SivertParser::FieldsepContext::COMMA() {
  return getToken(SivertParser::COMMA, 0);
}

tree::TerminalNode* SivertParser::FieldsepContext::SEMI() {
  return getToken(SivertParser::SEMI, 0);
}


size_t SivertParser::FieldsepContext::getRuleIndex() const {
  return SivertParser::RuleFieldsep;
}

void SivertParser::FieldsepContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFieldsep(this);
}

void SivertParser::FieldsepContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFieldsep(this);
}

SivertParser::FieldsepContext* SivertParser::fieldsep() {
  FieldsepContext *_localctx = _tracker.createInstance<FieldsepContext>(_ctx, getState());
  enterRule(_localctx, 46, SivertParser::RuleFieldsep);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(465);
    _la = _input->LA(1);
    if (!(_la == SivertParser::SEMI

    || _la == SivertParser::COMMA)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NumberContext ------------------------------------------------------------------

SivertParser::NumberContext::NumberContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SivertParser::NumberContext::INT() {
  return getToken(SivertParser::INT, 0);
}

tree::TerminalNode* SivertParser::NumberContext::HEX() {
  return getToken(SivertParser::HEX, 0);
}

tree::TerminalNode* SivertParser::NumberContext::FLOAT() {
  return getToken(SivertParser::FLOAT, 0);
}

tree::TerminalNode* SivertParser::NumberContext::HEX_FLOAT() {
  return getToken(SivertParser::HEX_FLOAT, 0);
}


size_t SivertParser::NumberContext::getRuleIndex() const {
  return SivertParser::RuleNumber;
}

void SivertParser::NumberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNumber(this);
}

void SivertParser::NumberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNumber(this);
}

SivertParser::NumberContext* SivertParser::number() {
  NumberContext *_localctx = _tracker.createInstance<NumberContext>(_ctx, getState());
  enterRule(_localctx, 48, SivertParser::RuleNumber);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(467);
    _la = _input->LA(1);
    if (!(((((_la - 61) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 61)) & 15) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StringContext ------------------------------------------------------------------

SivertParser::StringContext::StringContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* SivertParser::StringContext::NORMALSTRING() {
  return getToken(SivertParser::NORMALSTRING, 0);
}

tree::TerminalNode* SivertParser::StringContext::CHARSTRING() {
  return getToken(SivertParser::CHARSTRING, 0);
}

tree::TerminalNode* SivertParser::StringContext::LONGSTRING() {
  return getToken(SivertParser::LONGSTRING, 0);
}


size_t SivertParser::StringContext::getRuleIndex() const {
  return SivertParser::RuleString;
}

void SivertParser::StringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterString(this);
}

void SivertParser::StringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<SivertParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitString(this);
}

SivertParser::StringContext* SivertParser::string() {
  StringContext *_localctx = _tracker.createInstance<StringContext>(_ctx, getState());
  enterRule(_localctx, 50, SivertParser::RuleString);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(469);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 2017612633061982208) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool SivertParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 12: return expSempred(antlrcpp::downCast<ExpContext *>(context), predicateIndex);
    case 15: return functioncallSempred(antlrcpp::downCast<FunctioncallContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool SivertParser::expSempred(ExpContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 9);
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);
    case 5: return precpred(_ctx, 3);
    case 6: return precpred(_ctx, 2);
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool SivertParser::functioncallSempred(FunctioncallContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 5);
    case 9: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void SivertParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  sivertparserParserInitialize();
#else
  ::antlr4::internal::call_once(sivertparserParserOnceFlag, sivertparserParserInitialize);
#endif
}
