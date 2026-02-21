/*
7 kyu
You're a square!
https://www.codewars.com/kata/54c27a33fb7da0db0100040e
*/

#include <cstdio>

bool is_square(int n);

static void do_test(int n, bool expected) {
  bool actual = is_square(n);
  printf("Value: %d, expected: %s, actual: %s --> %s\n", n,
         expected ? "true" : "false", actual ? "true" : "false",
         expected == actual ? "OK" : "FAIL");
}

int main() {
  do_test(-1, false);
  do_test(0, true);
  do_test(3, false);
  do_test(4, true);
  do_test(25, true);
  do_test(26, false);
  return 0;
}
