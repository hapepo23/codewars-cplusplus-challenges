/*
7 kyu
Disemvowel Trolls
https://www.codewars.com/kata/52fba66badcd10859f00097e
*/

#include <string>

std::string disemvowel(const std::string& str) {
  std::string result;
  result.reserve(str.size());
  constexpr std::string_view vowels = "aeiouAEIOU";
  for (char c : str)
    if (vowels.find(c) == std::string_view::npos)
      result += c;
  return result;
}
