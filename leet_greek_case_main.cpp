/*
6 kyu
(L33T + Grεεκ) Case
https://www.codewars.com/kata/556025c8710009fc2d000011
*/

#include <iostream>
#include <string>

std::string greekLeet(std::string str);

static void do_test(const std::string& str, const std::string& expected) {
  std::string actual = greekLeet(str);
  std::cout << "String  : \"" << str << "\"" << std::endl
            << "Expected: \"" << expected << "\"" << std::endl
            << "Actual  : \"" << actual << "\"" << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test("CODEWARS", "cθδεωαπs");
  do_test("kata", "κατα");
  do_test("kumite", "κμmιτε");
  do_test("greekleet", "gπεεκlεετ");
  return 0;
}
