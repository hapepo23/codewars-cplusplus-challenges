/*
7 kyu
Sum of odd numbers
https://www.codewars.com/kata/55fd2d567d94ac3bc9000064
*/

#include <iostream>

using LL = long long;

LL rowSumOddNumbers(const unsigned n);

static void do_test(const unsigned n, const LL expected) {
  LL actual = rowSumOddNumbers(n);
  std::cout << "Input   : " << n << std::endl;
  std::cout << "Expected: " << expected << std::endl;
  std::cout << "Actual  : " << actual << std::endl;
  std::cout << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test(1, 1LL);
  do_test(2, 8LL);
  do_test(3, 27LL);
  do_test(42, 74088LL);
  do_test(100, 1000000LL);
  do_test(300, 27000000LL);
  return 0;
}
