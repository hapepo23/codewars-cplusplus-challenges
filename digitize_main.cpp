/*
8 kyu
Convert number to reversed array of digits
https://www.codewars.com/kata/5583090cbe83f4fd8c000051
*/

#include <iostream>
#include <vector>

std::vector<int> digitize(unsigned long n);

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

static void do_test(unsigned long n, const std::vector<int>& expected) {
  std::vector<int> actual = digitize(n);
  std::cout << "Number  : " << n << std::endl;
  std::cout << "Expected: " << expected << std::endl;
  std::cout << "Actual  : " << actual << std::endl;
  std::cout << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test(348597, {7, 9, 5, 8, 4, 3});
  do_test(35231, {1, 3, 2, 5, 3});
  do_test(0, {0});
  return 0;
}
