#pragma once

#include <memory>
#include <string>

class Interpreter;

#include "Callable.hpp"
#include "Environment.hpp"
#include "Statement.hpp"

class Function : public Callable {
private:
  std::shared_ptr<Statement::Function> declaration;
  std::weak_ptr<Env> closure;

public:
  Function(std::shared_ptr<Statement::Function> declaration,
           std::shared_ptr<Env> closure);
  int arity();
  std::any call(Interpreter &interpreter, std::vector<std::any> arguments);
  std::string toString();
};
