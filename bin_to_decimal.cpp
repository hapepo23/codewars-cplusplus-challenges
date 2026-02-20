/*
8 kyu
Bin to Decimal
https://www.codewars.com/kata/57a5c31ce298a7e6b7000334
*/

#include <cstdlib>
#include <string>

unsigned long binToDec(const std::string& str) {
  return strtoul(str.c_str(), NULL, 2);
}
