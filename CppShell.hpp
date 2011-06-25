#ifndef CPPSH_CPPSHELL_HPP
#define CPPSH_CPPSHELL_HPP

#include <istream>
#include <string>

#include "CommandHistory.hpp"

class CppShell {
  public:
    CppShell(std::istream &input);
    bool read();
    bool read(std::istream &input);
    int print();
    void prompt();
    int eval();
    int eval(const std::string &code);

  private:
    std::istream *cmdsin;
    std::string cmdline;
    CommandHistory history;
};

#endif

