/*
5 kyu
Rot13
https://www.codewars.com/kata/530e15517bc88ac656000716
*/

#include <cctype>
#include <string>

std::string rot13(const std::string& msg) {
  std::string result{msg};
  size_t pos{0};
  for (char c : msg) {
    if (std::islower(c))
      result[pos] = 'a' + (c - 'a' + 13) % 26;
    else if (std::isupper(c))
      result[pos] = 'A' + (c - 'A' + 13) % 26;
    ++pos;
  }
  return result;
}
