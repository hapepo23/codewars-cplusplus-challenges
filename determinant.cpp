/*
4 kyu
Matrix Determinant
https://www.codewars.com/kata/52a382ee44408cea2500074c
*/

#include <vector>

using LL = long long;
using LLMatrix = std::vector<std::vector<LL>>;

static LLMatrix create_sub_matrix(const LLMatrix& m, size_t col) {
  size_t size = m.size();
  size_t newsize = size - 1;
  LLMatrix sub(newsize, std::vector<LL>(newsize));
  for (size_t r = 1; r < size; ++r) {
    size_t sub_col = 0;
    for (size_t c = 0; c < size; ++c) {
      if (c == col)
        continue;
      sub[r - 1][sub_col++] = m[r][c];
    }
  }
  return sub;
}

LL determinant(const LLMatrix& m) {
  size_t size = m.size();
  if (size == 1)
    return m[0][0];
  if (size == 2)
    return m[0][0] * m[1][1] - m[1][0] * m[0][1];
  LL result = 0;
  for (size_t i = 0; i < size; ++i) {
    LLMatrix sub = create_sub_matrix(m, i);
    LL cofactor = ((i % 2 == 0) ? 1 : -1) * m[0][i] * determinant(sub);
    result += cofactor;
  }
  return result;
}
