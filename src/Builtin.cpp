#include "Builtin.hpp"
#include <chrono>
#include <iostream>
#include <random>

void builtinError(const std::string &nameBuiltin) {
  std::cerr << "Builtin '" << nameBuiltin << "' function error.\n";
  std::exit(1);
}

// Get Clock
int Clock::arity() { return 0; }

std::any Clock::call(Interpreter &interpreter,
                     std::vector<std::any> arguments) {
  if (arguments.size() > (size_t)arity() && interpreter.global != nullptr) {
    builtinError("clock");
  }
  auto now = std::chrono::system_clock::now();
  auto duration = now.time_since_epoch();
  auto millis =
      std::chrono::duration_cast<std::chrono::milliseconds>(duration).count();
  double c = static_cast<double>(millis) / 1000.0;
  return std::any_cast<double>(c);
}

std::string Clock::toString() { return "<function builtin>"; }

// Random Number Generator
int Rand::arity() { return 2; }

std::any Rand::call(Interpreter &interpreter, std::vector<std::any> arguments) {
  if (arguments.size() != (size_t)arity() && interpreter.global != nullptr) {
    builtinError("rand");
  }

  for (size_t i = 0; i < (size_t)arity(); i++) {
    if (!arguments[i].has_value() || (arguments[i].type() != typeid(double))) {
      builtinError("rand");
    }
  }

  double a = std::any_cast<double>(arguments[0]);
  double b = std::any_cast<double>(arguments[1]);

  std::random_device rd;
  std::mt19937 gen(rd());

  std::uniform_int_distribution<> dist(a, b);

  double random_number = dist(gen);

  return std::any_cast<double>(random_number);
}

std::string Rand::toString() { return "<function builtin>"; }

// Get Operating System Enviroment
int GetEnv::arity() { return 1; }

std::any GetEnv::call(Interpreter &interpreter,
                      std::vector<std::any> arguments) {
  if (arguments.size() > (size_t)arity() && interpreter.global != nullptr) {
    builtinError("getenv");
  }

  std::string name = std::any_cast<std::string>(arguments[0]);
  std::string envname = std::getenv(name.data());

  return std::any_cast<std::string>(envname);
}

std::string GetEnv::toString() { return "<function builtin>"; }

// Convert to a String
int ToString::arity() { return 1; }

std::any ToString::call(Interpreter &interpreter,
                        std::vector<std::any> arguments) {
  if (arguments.size() > (size_t)arity() && interpreter.global != nullptr) {
    builtinError("to_string");
  }

  if (!arguments[0].has_value() || arguments[0].type() != typeid(double)) {
    builtinError("to_string");
  }

  int terint = std::any_cast<double>(arguments[0]);
  std::string str = std::to_string(std::any_cast<int>(terint));

  return std::any_cast<std::string>(str);
}

std::string ToString::toString() { return "<function builtin>"; }

// Language Version
int Args::arity() { return 0; }

std::any Args::call(Interpreter &interpreter, std::vector<std::any> arguments) {
  if (arguments.size() > (size_t)arity() && interpreter.global != nullptr) {
    builtinError("args");
  }

  std::string version = "Sivert 0.0.1";
  return std::any_cast<std::string>(version);
}

std::string Args::toString() { return "<function builtin>"; }
