/*
8 kyu
Convert number to reversed array of digits
https://www.codewars.com/kata/5583090cbe83f4fd8c000051
*/

#include <vector>

std::vector<int> digitize(unsigned long n) {
  std::vector<int> result;
  while (n > 9) {
    result.push_back(n % 10);
    n /= 10;
  }
  result.push_back(n);
  return result;
}
