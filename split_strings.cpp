/*
6 kyu
Split Strings
https://www.codewars.com/kata/515de9ae9dcfc28eb6000001
*/

#include <string>
#include <vector>

std::vector<std::string> solution(const std::string& s) {
  std::vector<std::string> result;
  result.reserve((s.size() + 1) / 2);
  for (size_t i = 0; i < s.size(); i += 2) {
    if (i + 1 < s.size())
      result.emplace_back(s.substr(i, 2));
    else
      result.emplace_back(std::string{s[i], '_'});
  }
  return result;
}
