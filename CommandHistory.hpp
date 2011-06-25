#ifndef CPPSH_COMMANDHISTORY_HPP
#define CPPSH_COMMANDHISTORY_HPP

#include "isocpp.hpp"

class CommandHistory {
  public:
    void add(string cmdline);

  private:
    deque<string> h;
};

#endif

