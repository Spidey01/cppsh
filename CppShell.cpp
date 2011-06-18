
#include <iostream>

#include "CppShell.hpp"

CppShell::CppShell( std::istream &input )
{
    cmdsin = &input;
}

bool
CppShell::read()
{
    return read(*cmdsin);
}

bool
CppShell::read(std::istream &input)
{
    prompt();
    getline(input, cmdline);
    return input.good();
}

int
CppShell::print()
{
    std::cout << "> '" << cmdline << "'" << std::endl;
    return cmdline.length();
}

void
CppShell::prompt()
{
    std::cout << "$ ";
}

