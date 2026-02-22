/*
7 kyu
String matchup
https://www.codewars.com/kata/59ca8e8e1a68b7de740001f4
*/

#include <string>
#include <unordered_map>
#include <vector>

using VI = std::vector<int>;
using VS = std::vector<std::string>;

VI solve(const VS& a, const VS& b) {
  std::unordered_map<std::string, int> freq;
  for (const auto& s : a)
    ++freq[s];
  VI result;
  result.reserve(b.size());
  for (const auto& s : b)
    result.push_back(freq[s]);
  return result;
}
