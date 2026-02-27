/*
6 kyu
Multiple of 11
https://www.codewars.com/kata/581f12491bbdd0ca45000070
*/

#include <string>

bool eleven(const std::string& input) {
  int n{0};
  size_t s{input.size()};
  for (size_t i = 0; i < s; ++i)
    n += (i % 2 ? 1 : -1) * (input[i] - '0');
  return n % 11 == 0;
}
