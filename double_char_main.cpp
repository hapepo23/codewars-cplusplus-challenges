/*
8 kyu
Double Char
https://www.codewars.com/kata/56b1f01c247c01db92000076
*/

#include <iostream>
#include <string>

std::string double_char(const std::string& str);

static void do_test(const std::string& str, const std::string& expected) {
  std::string actual = double_char(str);
  std::cout << "String  : \"" << str << "\"" << std::endl
            << "Expected: \"" << expected << "\"" << std::endl
            << "Actual  : \"" << actual << "\"" << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test("Z", "ZZ");
  do_test("Zz", "ZZzz");
  do_test("  ", "    ");
  do_test("String", "SSttrriinngg");
  do_test("1234!_ ", "11223344!!__  ");
  do_test("Hello World", "HHeelllloo  WWoorrlldd");
  return 0;
}
