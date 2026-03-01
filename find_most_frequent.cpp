/*
6 kyu
Find most frequent element in a list
https://www.codewars.com/kata/59b1314d44a4b7b93b000073
*/

#include <climits>
#include <forward_list>
#include <unordered_map>
#include <utility>

std::pair<int, int> findMostFrequent(const std::forward_list<int>& l) {
  if (l.empty())
    return {0, 0};
  std::unordered_map<int, int> counts;
  std::unordered_map<int, int> fpos;
  int index = 0;
  for (const auto& v : l) {
    ++counts[v];
    if (fpos.find(v) == fpos.end())
      fpos[v] = index;
    ++index;
  }
  int bv = 0;
  int bc = 0;
  int bp = INT_MAX;
  for (const auto& [v, c] : counts) {
    if (c > bc || (c == bc && fpos[v] < bp)) {
      bv = v;
      bc = c;
      bp = fpos[v];
    }
  }
  return {bv, bc};
}
