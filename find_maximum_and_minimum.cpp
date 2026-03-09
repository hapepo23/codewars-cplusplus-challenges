/*
8 kyu
Find Maximum and Minimum Values of a List
https://www.codewars.com/kata/577a98a6ae28071780000989
*/

#include <algorithm>
#include <vector>

using VI = std::vector<int>;

int min(const VI& list) {
  return *min_element(list.begin(), list.end());
}

int max(const VI& list) {
  return *max_element(list.begin(), list.end());
}
