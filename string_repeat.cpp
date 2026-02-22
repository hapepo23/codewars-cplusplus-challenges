/*
8 kyu
String repeat
https://www.codewars.com/kata/57a0e5c372292dd76d000d7e
*/

#include <sstream>
#include <string>

std::string repeat_str(size_t repeat, const std::string& str) {
  std::ostringstream os;
  for (size_t i = 0; i < repeat; i++)
    os << str;
  return os.str();
}
