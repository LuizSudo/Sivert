#pragma once

#include "Interpreter.hpp"
#include "Parser.hpp"
#include "Resolver.hpp"
#include "Lexer.hpp"
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

class Lang {
private:
  static void run(const std::string &);

public:
  static void run_file(const std::string &);
  static void repl();
};
