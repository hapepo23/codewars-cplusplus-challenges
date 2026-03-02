/*
7 kyu
Printer Errors
https://www.codewars.com/kata/56541980fa08ab47a0000040
*/

#include <sstream>
#include <string>

class Printer {
 public:
  static std::string printerError(const std::string& s);
};

std::string Printer::printerError(const std::string& s) {
  size_t total{0};
  size_t err{0};
  for (char c : s) {
    ++total;
    if (c < 'a' || c > 'm')
      ++err;
  }
  std::ostringstream os;
  os << err << '/' << total;
  return os.str();
}
