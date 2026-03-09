/*
8 kyu
Find Maximum and Minimum Values of a List
https://www.codewars.com/kata/577a98a6ae28071780000989
*/

#include <iostream>
#include <vector>

using VI = std::vector<int>;

int min(const VI& list);
int max(const VI& list);

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

static void do_test_min(const VI& numbers, const int expected) {
  int actual = min(numbers);
  std::cout << "Minimum" << std::endl
            << "Array   : " << numbers << std::endl
            << "Expected: " << expected << std::endl
            << "Actual  : " << actual << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

static void do_test_max(const VI& numbers, const int expected) {
  int actual = max(numbers);
  std::cout << "Maximum" << std::endl
            << "Array   : " << numbers << std::endl
            << "Expected: " << expected << std::endl
            << "Actual  : " << actual << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test_min({-52, 56, 30, 29, -54, 0, -110}, -110);
  do_test_min({42, 54, 65, 87, 0}, 0);
  do_test_max({4, 6, 2, 1, 9, 63, -134, 566}, 566);
  do_test_max({5}, 5);
  return 0;
}
