
#include "isocpp.hpp"

#include "CppShell.hpp"

int
main(int argc, char *argv[])
{
    CppShell cppsh(std::cin);

    while (cppsh.read()) {
        cppsh.eval();
    }

    std::exit(EXIT_SUCCESS);
}

