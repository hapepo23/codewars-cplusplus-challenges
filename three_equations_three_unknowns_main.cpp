/*
5 kyu
Simultaneous Equations - Three Variables
https://www.codewars.com/kata/59280c056d6c5a74ca000149
*/

#include <cstdio>
#include <vector>

int* solveEq(int eq[3][4]);

int main() {
  int eq1[3][4] = {{4, -3, 1, -10}, {2, 1, 3, 0}, {-1, 2, -5, 17}};
  int* results = solveEq(eq1);
  std::vector<int> expected1 = {1, 4, -2};
  std::vector<int> result1(
      results, 1 + results + (unsigned)(sizeof results) / sizeof results[0]);
  printf("{%d, %d, %d} = %s\n", results[0], results[1], results[2],
         result1 == expected1 ? "OK" : "FAIL");
  int eq2[3][4] = {{2, 1, 3, 10}, {-3, -2, 7, 5}, {3, 3, -4, 7}};
  results = solveEq(eq2);
  std::vector<int> expected2 = {-1, 6, 2};
  std::vector<int> result2(
      results, 1 + results + (unsigned)(sizeof results) / sizeof results[0]);
  printf("{%d, %d, %d} = %s\n", results[0], results[1], results[2],
         result2 == expected2 ? "OK" : "FAIL");
  int eq3[3][4] = {{4, 2, -5, -21}, {2, -2, 1, 7}, {4, 3, -1, -1}};
  results = solveEq(eq3);
  std::vector<int> expected3 = {1, 0, 5};
  std::vector<int> result3(
      results, 1 + results + (unsigned)(sizeof results) / sizeof results[0]);
  printf("{%d, %d, %d} = %s\n", results[0], results[1], results[2],
         result3 == expected3 ? "OK" : "FAIL");
  return 0;
}
