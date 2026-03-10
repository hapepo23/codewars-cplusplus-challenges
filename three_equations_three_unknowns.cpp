/*
5 kyu
Simultaneous Equations - Three Variables
https://www.codewars.com/kata/59280c056d6c5a74ca000149
*/

#include <cstddef>

static int* create_sub_matrix(size_t size, int* matrix, size_t col) {
  size_t newsize = size - 1;
  int* sub_matrix = new int[newsize * newsize];
  for (size_t r = 1; r < size; r++) {
    for (size_t c = 0; c < col; c++)
      sub_matrix[(r - 1) * newsize + c] = matrix[r * size + c];
    for (size_t c = col + 1; c < size; c++)
      sub_matrix[(r - 1) * newsize + c - 1] = matrix[r * size + c];
  }
  return sub_matrix;
}

static int determinant(size_t size, int* matrix) {
  int result = 0;
  if (size == 1)
    result = matrix[0];
  else if (size == 2)
    result = matrix[0] * matrix[3] - matrix[2] * matrix[1];
  else if (size > 2) {
    for (size_t i = 0; i < size; i++) {
      int* sub_matrix = create_sub_matrix(size, matrix, i);
      int cofactor =
          (i % 2 == 0 ? 1 : -1) * matrix[i] * determinant(size - 1, sub_matrix);
      delete[] sub_matrix;
      result += cofactor;
    }
  }
  return result;
}

int* solveEq(int eq[3][4]) {
  static int result[3];
  int matrix[9];
  int d, dd;
  // Using Cramer's Rule
  for (size_t i = 0; i < 3; i++)
    for (size_t j = 0; j < 3; j++)
      matrix[i * 3 + j] = eq[i][j];
  d = determinant(3, matrix);
  for (size_t k = 0; k < 3; k++) {
    for (size_t i = 0; i < 3; i++)
      matrix[i * 3 + k] = eq[i][3];
    dd = determinant(3, matrix);
    for (size_t i = 0; i < 3; i++)
      matrix[i * 3 + k] = eq[i][k];
    result[k] = dd / d;
  }
  return result;
}
