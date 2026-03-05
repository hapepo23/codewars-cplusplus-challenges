/*
5 kyu
Lazy Repeater
https://www.codewars.com/kata/51fc3beb41ecc97ee20000c3
*/

#include <functional>
#include <string>

std::function<char()> makeLooper(const std::string& str) {
  return [str, i = size_t{0}]() mutable {
    char c = str[i];
    i = (i + 1) % str.size();
    return c;
  };
}
