
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
    if (!cmdline.empty())
        history.add(cmdline);
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

int
CppShell::eval()
{
    eval(cmdline);
}

int
CppShell::eval(const std::string &code)
{
    print();
}

