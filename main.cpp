
#include <cstdlib>
#include <iostream>

#include "CppShell.hpp"

int
main(int argc, char *argv[])
{
    CppShell cppsh(std::cin);

    while (cppsh.read()) {
        cppsh.print();
    }

    std::exit(EXIT_SUCCESS);
}

