
#include <istream>
#include <string>

class CppShell {
  public:

    CppShell(std::istream &input);

    bool read();
    bool read(std::istream &input);
    int print();
    void prompt();

  private:
    std::istream *cmdsin;
    std::string cmdline;
};

