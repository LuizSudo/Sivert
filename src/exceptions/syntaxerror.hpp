#include <stdexcept>

namespace SivertLang
{
class SyntaxErrorException : public std::logic_error
{
public:
    SyntaxErrorException() : std::logic_error("Syntax error.") {}
};
}