/*
6 kyu
Find the odd int
https://www.codewars.com/kata/54da5a58ea159efa38000836
*/

#include <iostream>
#include <vector>

int findOdd(const std::vector<int>& numbers);

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

static void do_test(const std::vector<int>& numbers, const int expected) {
  int actual = findOdd(numbers);
  std::cout << "Array   : " << numbers << std::endl
            << "Expected: " << expected << std::endl
            << "Actual  : " << actual << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test({20, 1, -1, 2, -2, 3, 3, 5, 5, 1, 2, 4, 20, 4, -1, -2, 5}, 5);
  do_test({1, 1, 2, -2, 5, 2, 4, 4, -1, -2, 5}, -1);
  do_test({20, 1, 1, 2, 2, 3, 3, 5, 5, 4, 20, 4, 5}, 5);
  do_test({10}, 10);
  do_test({1, 1, 1, 1, 1, 1, 10, 1, 1, 1, 1}, 10);
  do_test({5, 4, 3, 2, 1, 5, 4, 3, 2, 10, 10}, 1);
  return 0;
}
