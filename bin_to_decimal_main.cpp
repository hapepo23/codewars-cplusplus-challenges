/*
8 kyu
Bin to Decimal
https://www.codewars.com/kata/57a5c31ce298a7e6b7000334
*/

#include <iostream>
#include <string>

unsigned long binToDec(const std::string& str);

static void do_test(const std::string& str, const unsigned long expected) {
  unsigned long actual = binToDec(str);
  std::cout << "String: " << str << ", expected: " << expected
            << ", actual: " << actual << " -> "
            << (expected == actual ? "OK" : "FAIL") << std::endl;
}

int main() {
  do_test("0", 0ul);
  do_test("1", 1ul);
  do_test("10", 2ul);
  do_test("11", 3ul);
  do_test("110", 6ul);
  do_test("11111111111111111111111111111111", 4294967295ul);
  return 0;
}
