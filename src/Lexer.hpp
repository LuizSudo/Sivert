#pragma once

#include "Debug.hpp"
#include "Token.hpp"
#include <iostream>
#include <unordered_map>
#include <vector>

class Scanner {
private:
  int start = 0;
  int current = 0;
  int line = 1;
  std::string source;
  std::vector<Token> tokens;
  std::unordered_map<std::string, TokenType> keywords = {
      {"import", TokenType::IMPORT},     {"and", TokenType::AND},
      {"class", TokenType::CLASS},       {"else", TokenType::ELSE},
      {"false", TokenType::FALSE},       {"for", TokenType::FOR},
      {"function", TokenType::FUNCTION}, {"if", TokenType::IF},
      {"nil", TokenType::NIL},           {"or", TokenType::OR},
      {"out", TokenType::OUT},           {"print", TokenType::PRINT},
      {"return", TokenType::PASS},       {"super", TokenType::SUPER},
      {"this", TokenType::THIS},         {"true", TokenType::TRUE},
      {"var", TokenType::AUTO},          {"while", TokenType::WHILE}};

  bool isAlpha(char c);
  bool isDigit(char c);
  bool isAlphaNumeric(char c);
  bool match(char expected);
  void scanToken();
  char advance();
  void addToken(TokenType type);
  void addToken(TokenType type, std::any literal);
  char peek();
  char peekNext();
  void string();
  void number();
  void identifier();

public:
  Scanner(const std::string &);
  bool isAtEnd();
  std::vector<Token> scanTokens();
};
