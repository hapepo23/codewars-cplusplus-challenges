/*
4 kyu
Matrix Determinant
https://www.codewars.com/kata/52a382ee44408cea2500074c
*/

#include <iostream>
#include <vector>

using LL = long long;
using LLMatrix = std::vector<std::vector<LL>>;

LL determinant(const LLMatrix& m);

template <typename T>
std::ostream& operator<<(std::ostream& os,
                         const std::vector<std::vector<T>>& m) {
  os << "{";
  for (size_t i = 0; i < m.size(); ++i) {
    os << "{";
    for (size_t j = 0; j < m[i].size(); ++j) {
      os << m[i][j];
      if (j + 1 < m[i].size())
        os << ", ";
    }
    os << "}";
    if (i + 1 < m.size())
      os << ", ";
  }
  os << "}";
  return os;
}

static void do_test(const LLMatrix& m, const LL expected) {
  LL actual = determinant(m);
  std::cout << "Matrix: " << m << std::endl
            << "Expected: " << expected << ", actual: " << actual << " -> "
            << (actual == expected ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main(void) {
  {
    const LLMatrix matrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    do_test(matrix, 0);
  }
  {
    const LLMatrix matrix = {{4, 6}, {3, 8}};
    do_test(matrix, 14);
  }
  {
    const LLMatrix matrix = {{2, 4, 2}, {3, 1, 1}, {1, 2, 0}};
    do_test(matrix, 10);
  }
  {
    const LLMatrix matrix = {
        {2, 3, 7, 1},
        {7, 1, 9, 8},
        {8, 6, 1, 4},
        {0, 1, 4, 2},
    };
    do_test(matrix, 681);
  }
  {
    const LLMatrix matrix = {
        {1, 2, 5, -7, 5, 3}, {7, -4, 6, 3, 9, 11},   {22, -16, 4, 7, 8, 1},
        {-8, 0, 9, 5, 8, 1}, {77, -6, -5, 1, 23, 3}, {9, 6, -7, 3, 4, 5},
    };
    do_test(matrix, -3487464);
  }
  {
    const LLMatrix matrix = {{1, 3}, {2, 5}};
    do_test(matrix, -1);
  }
  {
    const LLMatrix matrix = {{2, 5, 3}, {1, -2, -1}, {1, 3, 4}};
    do_test(matrix, -20);
  }
  return 0;
}
