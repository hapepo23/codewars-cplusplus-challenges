/*
6 kyu
Delete occurrences of an element if it occurs more than n times
https://www.codewars.com/kata/554ca54ffa7d91b236000023
*/

#include <iostream>
#include <vector>

std::vector<int> deleteNth(const std::vector<int>& arr, const int n);

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

static void do_test(const std::vector<int>& arr,
                    const int n,
                    const std::vector<int>& expected) {
  std::vector<int> actual = deleteNth(arr, n);
  std::cout << "Array   : " << arr << std::endl
            << "Expected: " << expected << std::endl
            << "Actual  : " << actual << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test({20, 37, 20, 21}, 1, {20, 37, 21});
  do_test({1, 1, 3, 3, 7, 2, 2, 2, 2}, 3, {1, 1, 3, 3, 7, 2, 2, 2});
  return 0;
}
