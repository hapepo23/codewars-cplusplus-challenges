/*
8 kyu
Count by X
https://www.codewars.com/kata/5513795bd3fafb56c200049e
*/

#include <iostream>
#include <vector>

std::vector<int> countBy(const int x, const int n);

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
  os << "{";
  for (size_t i = 0; i < v.size(); ++i) {
    os << v[i];
    if (i + 1 < v.size())
      os << ", ";
  }
  os << "}";
  return os;
}

static void do_test(const int x,
                    const int n,
                    const std::vector<int>& expected) {
  std::vector<int> actual = countBy(x, n);
  std::cout << "x: " << x << ", n: " << n << std::endl;
  std::cout << "Expected: " << expected << std::endl;
  std::cout << "Actual  : " << actual << std::endl;
  std::cout << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test(2, 5, {2, 4, 6, 8, 10});
  do_test(1, 10, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
  do_test(100, 5, {100, 200, 300, 400, 500});
  return 0;
}
