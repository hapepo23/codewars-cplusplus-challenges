/*
8 kyu
Get the mean of an array
https://www.codewars.com/kata/563e320cee5dddcf77000158
*/

#include <iostream>
#include <vector>

using VI = std::vector<int>;

int get_average(const VI& marks);

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

static void do_test(const VI& marks, const int expected) {
  int actual = get_average(marks);
  std::cout << "Marks   : " << marks << std::endl
            << "Expected: " << expected << std::endl
            << "Actual  : " << actual << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test({2, 2, 2, 2}, 2);
  do_test({1, 5, 87, 45, 8, 8}, 25);
  do_test({2, 5, 13, 20, 16, 16, 10}, 11);
  do_test({1, 2, 15, 15, 17, 11, 12, 17, 17, 14, 13, 15, 6, 11, 8, 7}, 11);
  return 0;
}
