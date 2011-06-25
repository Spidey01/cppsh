
#include "CppShell.hpp"

CppShell::CppShell( istream &input )
{
    cmdsin = &input;
}

bool
CppShell::read()
{
    return read(*cmdsin);
}

bool
CppShell::read(istream &input)
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
    cout << "> '" << cmdline << "'" << endl;
    return cmdline.length();
}

void
CppShell::prompt()
{
    cout << "$ ";
}

int
CppShell::eval()
{
    eval(cmdline);
}

int
CppShell::eval(const string &code)
{
    print();
}

