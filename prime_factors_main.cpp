/*
6 kyu
Prime Factors
https://www.codewars.com/kata/542f3d5fd002f86efc00081a
*/

#include <iostream>
#include <vector>

std::vector<int> prime_factors(long n);

template <typename T>
static std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
  os << "{";
  for (size_t i = 0; i < v.size(); ++i) {
    os << v[i];
    if (i + 1 < v.size())
      os << ", ";
  }
  os << "}";
  return os;
}

static void do_test(long n, const std::vector<int>& expected) {
  std::vector<int> actual = prime_factors(n);
  std::cout << "n       : " << n << std::endl
            << "expected: " << expected << std::endl
            << "actual  : " << actual << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test(1, {});
  do_test(4, {2, 2});
  do_test(12, {2, 2, 3});
  do_test(933555431, {7537, 123863});
  do_test(2 * 3 * 5 * 7 * 11 * 13 * 17 * 19 * 23,
          {2, 3, 5, 7, 11, 13, 17, 19, 23});
  return 0;
}
