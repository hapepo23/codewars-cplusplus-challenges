/*
8 kyu
Count by X
https://www.codewars.com/kata/5513795bd3fafb56c200049e
*/

#include <vector>

std::vector<int> countBy(const int x, const int n) {
  std::vector<int> result{};
  result.reserve(n);
  for (int i = 1; i <= n; ++i)
    result.push_back(x * i);
  return result;
}
