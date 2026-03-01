/*
8 kyu
Century From Year
https://www.codewars.com/kata/5a3fe3dde1ce0e8ed6000097
*/

#include <cstdio>

int centuryFromYear(int year);

static void do_test(int year, int expected) {
  int actual = centuryFromYear(year);
  printf("Year = %d, century expected: %d, actual: %d --> %s\n", year, expected,
         actual, expected == actual ? "OK" : "FAIL");
}

int main() {
  do_test(1705, 18);
  do_test(1900, 19);
  do_test(1601, 17);
  do_test(2000, 20);
  do_test(1, 1);
  do_test(100, 1);
  do_test(101, 2);
  do_test(200, 2);
  return 0;
}
