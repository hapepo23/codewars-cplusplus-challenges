/*
7 kyu
Growth of a Population
https://www.codewars.com/kata/563b662a59afc2b5120000c6
*/

#include <iostream>

class Arge {
 public:
  static int nbYear(int p0, double percent, int aug, int p);
};

static void do_test(int p0, double percent, int aug, int p, int expected) {
  int actual = Arge::nbYear(p0, percent, aug, p);
  std::cout << "p0: " << p0 << ", percent: " << percent << ", aug: " << aug
            << ", p: " << p << ", expected: " << expected
            << ", actual: " << actual << " -> "
            << (expected == actual ? "OK" : "FAIL") << std::endl;
}

int main() {
  do_test(1500, 5, 100, 5000, 15);
  do_test(1500000, 2.5, 10000, 2000000, 10);
  do_test(1500000, 0.25, 1000, 2000000, 94);
  do_test(1500000, 0.25, -1000, 2000000, 151);
  return 0;
}
