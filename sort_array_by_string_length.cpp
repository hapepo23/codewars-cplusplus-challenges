/*
7 kyu
Sort array by string length
https://www.codewars.com/kata/57ea5b0b75ae11d1e800006c
*/

#include <algorithm>
#include <string>
#include <vector>

using VS = std::vector<std::string>;

VS sortByLength(const VS& array) {
  VS result = array;
  std::sort(result.begin(), result.end(),
            [](const std::string& a, const std::string& b) {
              return a.size() < b.size();
            });
  return result;
}
