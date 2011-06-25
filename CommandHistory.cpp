
#include "CommandHistory.hpp"

void
CommandHistory::add(string cmdline)
{
    h.push_back(cmdline);
}

