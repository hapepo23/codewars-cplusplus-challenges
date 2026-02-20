/*
8 kyu
Third Angle of a Triangle
https://www.codewars.com/kata/5a023c426975981341000014
*/

#include <cstdio>

class Triangle {
public:
  static int otherAngle(int a, int b);
};

static void do_test(int a, int b, int expected) {
  int actual = Triangle::otherAngle(a, b);
  printf("a = %d, b = %d, expected: %d, actual: %d --> %s\n", a, b, expected, actual, expected == actual ? "OK" : "FAIL");
}

int main() {
	do_test(30, 60, 90);
	do_test(60, 60, 60);
	do_test(43, 78, 59);
	do_test(10, 20, 150);
  return 0;
}
