/*
7 kyu
Remove All The Marked Elements of a List
https://www.codewars.com/kata/563089b9b7be03472d00002b
*/

#include <iostream>
#include <vector>

using VI = std::vector<int>;

VI remove_values(const VI& integers, const VI& values);

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

static void do_test(const VI& integers, const VI& values, const VI& expected) {
  VI actual = remove_values(integers, values);
  std::cout << "Array integers: " << integers << std::endl;
  std::cout << "Array values  : " << values << std::endl;
  std::cout << "Array expected: " << expected << std::endl;
  std::cout << "Array actual  : " << actual << std::endl;
  std::cout << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  VI integers, values, expected;
  integers = {1, 1, 2, 3, 1, 2, 3, 4};
  values = {1, 3};
  expected = {2, 2, 4};
  do_test(integers, values, expected);
  integers = {1, 1, 2, 3, 1, 2, 3, 4, 4, 3, 5, 6, 7, 2, 8};
  values = {1, 3, 4, 2};
  expected = {5, 6, 7, 8};
  do_test(integers, values, expected);
  integers = {8, 2, 7, 2, 3, 4, 6, 5, 4, 4, 1, 2, 3};
  values = {2, 4, 3};
  expected = {8, 7, 6, 5, 1};
  do_test(integers, values, expected);
  return 0;
}
