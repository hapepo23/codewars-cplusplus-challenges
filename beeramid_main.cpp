/*
5 kyu
Beeramid
https://www.codewars.com/kata/51e04f6b544cf3f6550000c1
*/

#include <cstdio>

int beeramid(int bonus, double price);

static void do_test(int bonus, double price, int expected) {
  int actual = beeramid(bonus, price);
  printf("Bonus = %d, price = %.2f, expected: %d, actual: %d --> %s\n", bonus,
         price, expected, actual, expected == actual ? "OK" : "FAIL");
}

int main() {
  do_test(1500, 2, 12);
  do_test(5000, 3, 16);
  do_test(9, 2, 1);
  do_test(10, 2, 2);
  do_test(11, 2, 2);
  do_test(21, 1.5, 3);
  do_test(454, 5, 5);
  do_test(455, 5, 6);
  do_test(4, 4, 1);
  do_test(3, 4, 0);
  do_test(0, 4, 0);
  do_test(-1, 4, 0);
  return 0;
}
