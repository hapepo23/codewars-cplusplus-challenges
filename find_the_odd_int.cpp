/*
6 kyu
Find the odd int
https://www.codewars.com/kata/54da5a58ea159efa38000836
*/

#include <unordered_map>
#include <vector>

int findOdd(const std::vector<int>& numbers) {
  std::unordered_map<int, unsigned int> counts;
  for (auto& num : numbers)
    ++counts[num];
  for (auto& [key, value] : counts)
    if (value % 2)
      return key;
  return 0;  // should not happen
}
