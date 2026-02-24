/*
7 kyu
Isograms
https://www.codewars.com/kata/54ba84be607a92aa900000f1
*/

#include <cctype>
#include <string>

bool is_isogram(const std::string& str) {
  bool seen[26] = {false};
  for (char c : str) {
    if (!std::isalpha(c))
      continue;
    int idx = std::tolower(c) - 'a';
    if (seen[idx])
      return false;
    seen[idx] = true;
  }
  return true;
}
