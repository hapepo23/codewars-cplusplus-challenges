/*
7 kyu
Disemvowel Trolls
https://www.codewars.com/kata/52fba66badcd10859f00097e
*/

#include <iostream>
#include <string>

std::string disemvowel(const std::string& str);

static void do_test(const std::string& str, const std::string& expected) {
  std::string actual = disemvowel(str);
  std::cout << "String  : \"" << str << "\"" << std::endl
            << "Expected: \"" << expected << "\"" << std::endl
            << "Actual  : \"" << actual << "\"" << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test("This website is for losers LOL!", "Ths wbst s fr lsrs LL!");
  return 0;
}
