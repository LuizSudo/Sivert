#pragma once

#include "TokenType.hpp"
#include <any>
#include <iostream>
#include <sstream>

class Token {
public:
  TokenType type;
  std::string lexeme;
  std::any literal;
  int line;

  Token(TokenType type, std::string, std::any, int);
  bool operator<(const Token &obj) const;
  std::string toString();
};
