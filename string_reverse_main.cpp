/*
8 kyu
Reversed Strings
https://www.codewars.com/kata/5168bb5dfe9a00b126000018
*/

#include <cstdio>
#include <string>

std::string reverseString(const std::string& str);

static void do_test(const std::string& str, const std::string expected) {
  std::string actual = reverseString(str);
  printf("For string: \"%s\", expected: \"%s\", actual: \"%s\" -> %s\n",
         str.c_str(), expected.c_str(), actual.c_str(),
         expected == actual ? "OK" : "FAIL");
}

int main() {
  do_test("hello", "olleh");
  do_test("rat", "tar");
  do_test("alpha", "ahpla");
  do_test("codewars", "srawedoc");
  do_test("football", "llabtoof");
  do_test("translation", "noitalsnart");
  return 0;
}
