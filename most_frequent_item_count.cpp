/*
7 kyu
Find Count of Most Frequent Item in an Array
https://www.codewars.com/kata/56582133c932d8239900002e
*/

#include <algorithm>
#include <unordered_map>
#include <vector>

unsigned int most_frequent_item_count(const std::vector<int>& collection) {
  std::unordered_map<int, unsigned int> counts;
  unsigned int max_count = 0;
  for (int v : collection)
    max_count = std::max(max_count, ++counts[v]);
  return max_count;
}
