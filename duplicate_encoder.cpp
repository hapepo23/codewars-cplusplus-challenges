/*
6 kyu
Duplicate Encoder
https://www.codewars.com/kata/54b42f9314d9229fd6000d9c
*/

#include <array>
#include <cctype>
#include <string>

std::string duplicate_encoder(const std::string& word) {
  std::array<int, 256> cnt{};
  for (unsigned char c : word)
    ++cnt[std::toupper(c)];
  std::string result;
  result.reserve(word.size());
  for (unsigned char c : word)
    result += cnt[std::toupper(c)] == 1 ? '(' : ')';
  return result;
}
