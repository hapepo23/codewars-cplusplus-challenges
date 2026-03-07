/*
6 kyu
Prime Factors
https://www.codewars.com/kata/542f3d5fd002f86efc00081a
*/

#include <cmath>
#include <vector>

std::vector<int> prime_factors(long n) {
  std::vector<int> result;
  long num = n;
  int div = 2;
  int divmax = (int)sqrt(num);
  while (div <= divmax) {
    if (num % div == 0) {
      result.push_back(div);
      num /= div;
      divmax = (int)sqrt(num);
    } else
      div++;
  }
  if (num > 1)
    result.push_back((int)num);
  return result;
}
