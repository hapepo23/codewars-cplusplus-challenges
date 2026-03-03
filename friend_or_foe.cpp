/*
7 kyu
Friend or Foe?
https://www.codewars.com/kata/55b42574ff091733d900002f
*/

#include <algorithm>
#include <string>
#include <vector>

std::vector<std::string> friendOrFoe(const std::vector<std::string>& input) {
  std::vector<std::string> result;
  std::copy_if(input.begin(), input.end(), std::back_inserter(result),
               [](const std::string& s) { return s.size() == 4; });
  return result;
}
