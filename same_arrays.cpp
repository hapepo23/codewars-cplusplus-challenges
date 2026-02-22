/*
6 kyu
Are they the "same"?
https://www.codewars.com/kata/550498447451fbbd7600041c
*/

#include <algorithm>
#include <vector>

using VI = std::vector<int>;

class Same {
 public:
  static bool comp(VI& a, VI& b);
};

bool Same::comp(VI& a, VI& b) {
  for (auto& item : a)
    item *= item;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  return a == b;
}
