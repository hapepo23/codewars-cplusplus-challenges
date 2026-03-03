/*
6 kyu
Banker's Plan
https://www.codewars.com/kata/56445c4755d0e45b8c00010a
*/

#include <cstdio>

class BankerPlan {
 public:
  static bool fortune(int f0, double p, int c0, int n, double i);
};

static void do_test(int f0, double p, int c0, int n, double i, bool expected) {
  bool actual = BankerPlan::fortune(f0, p, c0, n, i);
  printf(
      "f0 = %d, p = %.2g percent, c0 = %d, n = %d, i = %.2g percent\n"
      "expected: %s, actual: %s -> %s\n\n",
      f0, p, c0, n, i, expected ? "true" : "false", actual ? "true" : "false",
      expected == actual ? "OK" : "FAIL");
}

int main() {
  do_test(100000, 1, 2000, 15, 1, true);
  do_test(100000, 1, 9185, 12, 1, false);
  return 0;
}
