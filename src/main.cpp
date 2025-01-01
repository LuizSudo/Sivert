#include "lang.hpp"

void help(const std::string &prog) {
  std::cerr << "Usage: " << prog << " [filename].srt\n";
}

int main(int argc, char **argv) {
  std::cout << "Sivert Programming Language - Copyright (c) 2025 Luiz Henrique "
               "Amaral Soares All Rights Reserved.\n\n";
  if (argc > 2) {
    help(argv[0]);
    return EXIT_FAILURE;
  }

  if (argc == 2) {
    const std::string filename = argv[1];
    const std::string hext = "\x2e\x73\x72\x74";
    if (filename.substr(filename.length() - 4, 4) != hext) {
      help(argv[0]);
      return EXIT_FAILURE;
    }
    Lang::run_file(argv[1]);
  } else {
    Lang::repl();
  }

  return EXIT_SUCCESS;
}
