/*
6 kyu
Sums of Parts
https://www.codewars.com/kata/5ce399e0047a45001c853c2b
*/

#include <vector>

using ULL = unsigned long long;
using ULLV = std::vector<ULL>;

ULLV partsSum(const ULLV& ls) {
  ULLV result(ls.size() + 1);
  ULL sum = 0;
  auto out = result.rbegin();
  *out++ = 0;
  for (auto it = ls.rbegin(); it != ls.rend(); ++it) {
    sum += *it;
    *out++ = sum;
  }
  return result;
}
