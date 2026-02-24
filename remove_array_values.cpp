/*
7 kyu
Remove All The Marked Elements of a List
https://www.codewars.com/kata/563089b9b7be03472d00002b
*/

#include <unordered_set>
#include <vector>

using VI = std::vector<int>;

VI remove_values(const VI& integers, const VI& values) {
  std::unordered_set<int> lookup(values.begin(), values.end());
  VI result;
  result.reserve(integers.size());
  for (int x : integers) {
    if (lookup.find(x) == lookup.end()) {
      result.push_back(x);
    }
  }
  return result;
}
