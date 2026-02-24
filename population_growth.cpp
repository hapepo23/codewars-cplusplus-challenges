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

int Arge::nbYear(int p0, double percent, int aug, int p) {
  int result{0};
  while (p0 < p) {
    p0 += static_cast<int>(p0 * percent * 0.01) + aug;
    result++;
  }
  return result;
}
