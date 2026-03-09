/*
6 kyu
Common array elements
https://www.codewars.com/kata/5a6225e5d8e145b540000127
*/

#include <iostream>
#include <vector>

using VI = std::vector<int>;

int common(const VI& a, const VI& b, const VI& c);

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

static void do_test(const VI& a, const VI& b, const VI& c, const int expected) {
  int actual = common(a, b, c);
  std::cout << "Array a : " << a << std::endl
            << "Array b : " << b << std::endl
            << "Array c : " << c << std::endl
            << "Expected: " << expected << std::endl
            << "Actual  : " << actual << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test({1, 2, 3}, {5, 3, 2}, {7, 3, 2}, 5);
  do_test({1, 2, 2, 3}, {5, 3, 2, 2}, {7, 3, 2, 2}, 7);
  return 0;
}
