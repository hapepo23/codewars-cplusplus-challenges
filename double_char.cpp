/*
8 kyu
Double Char
https://www.codewars.com/kata/56b1f01c247c01db92000076
*/

#include <string>

std::string double_char(const std::string& str) {
  std::string result;
  result.reserve(str.size() * 2);
  for (char c : str) {
    result.push_back(c);
    result.push_back(c);
  }
  return result;
}
