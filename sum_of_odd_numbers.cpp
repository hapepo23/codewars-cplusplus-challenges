/*
7 kyu
Sum of odd numbers
https://www.codewars.com/kata/55fd2d567d94ac3bc9000064
*/

using LL = long long;

LL rowSumOddNumbers(const unsigned n) {
  LL end = n * (n + 1) / 2;
  LL startm1 = end - n;
  return end * end - startm1 * startm1;
}
