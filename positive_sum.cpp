/*
8 kyu
Sum of positive
https://www.codewars.com/kata/5715eaedb436cf5606000381
*/

#include <vector>

int positive_sum(const std::vector<int>& vec) {
  int result{0};
  for (const auto& v : vec)
    if (v > 0)
      result += v;
  return result;
}
