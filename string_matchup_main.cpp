/*
7 kyu
String matchup
https://www.codewars.com/kata/59ca8e8e1a68b7de740001f4
*/

#include <iostream>
#include <string>
#include <vector>

using VI = std::vector<int>;
using VS = std::vector<std::string>;

VI solve(const VS& a, const VS& b);

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

static void do_test(const VS& a, const VS& b, const VI& expected) {
  VI actual = solve(a, b);
  std::cout << "Array a : " << a << std::endl;
  std::cout << "Array b : " << b << std::endl;
  std::cout << "Expected: " << expected << std::endl;
  std::cout << "Actual  : " << actual << std::endl;
  std::cout << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test(VS{"abc", "abc", "xyz", "abcd", "cde"}, VS{"abc", "cde", "uap"},
          VI{2, 1, 0});
  do_test(VS{"abc", "xyz", "abc", "xyz", "cde"}, VS{"abc", "cde", "xyz"},
          VI{2, 1, 2});
  return 0;
}
