/*
6 kyu
Delete occurrences of an element if it occurs more than n times
https://www.codewars.com/kata/554ca54ffa7d91b236000023
*/

#include <unordered_map>
#include <vector>

std::vector<int> deleteNth(const std::vector<int>& arr, const int n) {
  std::unordered_map<int, int> counts;
  std::vector<int> result;
  result.reserve(arr.size());
  for (const int& item : arr) {
    ++counts[item];
    if (counts[item] <= n)
      result.push_back(item);
  }
  return result;
}
