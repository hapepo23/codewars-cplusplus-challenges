/*
8 kyu
Sum of positive
https://www.codewars.com/kata/5715eaedb436cf5606000381
*/

#include <iostream>
#include <vector>

int positive_sum(const std::vector<int>& vec);

static void do_test(const std::vector<int>& vec, int expected) {
  int actual = positive_sum(vec);
  std::cout << "Array: { ";
  for (const auto& v : vec)
    std::cout << v << ' ';
  std::cout << "}, expected: " << expected << ", actual: " << actual << " -> "
            << (expected == actual ? "OK" : "FAIL") << std::endl;
}

int main() {
  do_test({-1, -2, -3, -4, -5}, 0);
  do_test({}, 0);
  do_test({1, 2, 3, 4, 5}, 15);
  do_test({1, -2, 3, 4, 5}, 13);
  do_test({-1, 2, 3, 4, -5}, 9);
  return 0;
}
