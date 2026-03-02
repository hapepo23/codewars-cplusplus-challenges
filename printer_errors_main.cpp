/*
7 kyu
Printer Errors
https://www.codewars.com/kata/56541980fa08ab47a0000040
*/

#include <iostream>
#include <string>

class Printer {
 public:
  static std::string printerError(const std::string& s);
};

static void do_test(const std::string& s, const std::string& expected) {
  std::string actual = Printer::printerError(s);
  std::cout << "String  : \"" << s << "\"" << std::endl
            << "Expected: \"" << expected << "\"" << std::endl
            << "Actual  : \"" << actual << "\"" << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  std::string s = "aaaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyz";
  do_test(s, "3/56");
  s = "kkkwwwaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyz";
  do_test(s, "6/60");
  s = "kkkwwwaaaaaaaaaaaaaabbbbbbbbbbbbbbbbbbmmmmmmmmmmmmmmmmmmmxyzuuuuu";
  do_test(s, "11/65");
  return 0;
}
