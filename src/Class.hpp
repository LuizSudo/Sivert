#pragma once

#include "Callable.hpp"
#include "Environment.hpp"
#include "Function.hpp"
#include "Interpreter.hpp"
#include "Statement.hpp"
#include <optional>

class Instance;

class Class : public Callable {
public:
  Class(const std::string &name,
        std::unordered_map<std::string, std::shared_ptr<Function>> methods);
  std::string name;
  std::unordered_map<std::string, std::shared_ptr<Function>> methods;
  std::optional<std::shared_ptr<Function>> findMethod(const std::string &name);

  int arity() override;
  std::any call(Interpreter &interpreter,
                std::vector<std::any> arguments) override;
  std::string toString() override;
};
