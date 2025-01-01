#include "Lexer.hpp"
#include <algorithm>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

class IncludeRun {
public:
  static void scanFile(std::string path);
  static void run(const std::string &);
  static std::vector<Token> tokens;
  static std::vector<Token> getTokens();
};
