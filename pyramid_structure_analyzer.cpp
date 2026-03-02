/*
7 kyu
Pyramid Structure Analyzer
https://www.codewars.com/kata/66bb6583ac1620f505a8e31b
*/

#include <tuple>

std::tuple<int, int, int, int> pyramid(int s) {
  return {(s - 2) / 4 + 1, (s - 2) / 2, (s - 2) / 4 + 1, (s - 2) / 4};
}
