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
void cout_vector(const std::vector<T>& v) {
  std::cout << "{ ";
  for (const auto& item : v)
    std::cout << item << " ";
  std::cout << "}" << std::endl;
}

static void do_test(const VS& a, const VS& b, const VI& expected) {
  VI actual = solve(a, b);
  std::cout << "Array a : ";
  cout_vector(a);
  std::cout << "Array b : ";
  cout_vector(b);
  std::cout << "Expected: ";
  cout_vector(expected);
  std::cout << "Actual  : ";
  cout_vector(actual);
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
