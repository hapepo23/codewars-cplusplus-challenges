/*
6 kyu
Bouncing Balls
https://www.codewars.com/kata/5544c7a5cb454edb3c000047
*/

#include <cstdio>

class Bouncingball {
 public:
  static int bouncingBall(double h, double bounce, double window);
};

static void do_test(double h, double bounce, double window, int expected) {
  int actual = Bouncingball::bouncingBall(h, bounce, window);
  printf(
      "h = %.3g, bounce = %.3g, window = %.3g, expected: %d, actual: %d -> "
      "%s\n",
      h, bounce, window, expected, actual, expected == actual ? "OK" : "FAIL");
}

int main() {
  do_test(3., 0.66, 1.5, 3);
  do_test(3., 0., 1.5, -1);
  do_test(3., 1., 1.5, -1);
  do_test(0., 1., 1.5, -1);
  do_test(3., 1., 4.5, -1);
  do_test(30, 0.66, 1.5, 15);
  return 0;
}
