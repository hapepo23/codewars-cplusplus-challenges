/*
6 kyu
Banker's Plan
https://www.codewars.com/kata/56445c4755d0e45b8c00010a
*/

class BankerPlan {
 public:
  static bool fortune(int f0, double p, int c0, int n, double i);
};

bool BankerPlan::fortune(int f0, double p, int c0, int n, double i) {
  int f = f0;
  for (int year = 2; year <= n; year++) {
    int c = year == 2 ? c0 : c * (1. + i / 100.);
    f = f * (1. + p / 100.) - c;
    if (f < 0)
      return false;
  }
  return true;
}
