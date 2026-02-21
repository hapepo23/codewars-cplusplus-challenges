/*
8 kyu
Reversed Strings
https://www.codewars.com/kata/5168bb5dfe9a00b126000018
*/

#include <string>

std::string reverseString(const std::string& str) {
  return std::string(str.rbegin(), str.rend());
}
