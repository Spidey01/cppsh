#ifndef CPPSH_ISOCPP_HPP
#define CPPSH_ISOCPP_HPP

// desired parts of the C library
#include <cassert>
#include <cctype>
#include <cerrno>
#include <clocale>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>

// desired parts of the C++ library (sic)
#include <algorithm>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iostream>
#include <istream>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <string>
#include <utility>
#include <vector>

// do not import any C++ functions!

// import C++ classes into namespace
using std::deque;
using std::exception;
using std::iostream;
using std::istream;
using std::ostream;
using std::string;

// import C++ objects into namespace
using std::cerr;
using std::cin;
using std::clog;
using std::cout;
using std::endl;

#endif

