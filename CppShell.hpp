#ifndef CPPSH_CPPSHELL_HPP
#define CPPSH_CPPSHELL_HPP

#include "isocpp.hpp"

#include "CommandHistory.hpp"

class CppShell {
  public:
    CppShell(istream &input);
    bool read();
    bool read(istream &input);
    int print();
    void prompt();
    int eval();
    int eval(const string &code);

  private:
    istream *cmdsin;
    string cmdline;
    CommandHistory history;
};

#endif

