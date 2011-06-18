
#include <cstdlib>

#include <iostream>
#include <string>

int
main(int argc, char *argv[])
{
    std::string input;

    std::cout << "$ ";
    while (std::getline(std::cin, input)) {
        std::cout << "> '" << input << "'" << std::endl;
        std::cout << "$ ";
    }

    std::exit(EXIT_SUCCESS);
}

