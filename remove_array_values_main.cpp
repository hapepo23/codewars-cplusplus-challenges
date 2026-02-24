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
void cout_vector(const std::vector<T>& v) {
  std::cout << "{ ";
  for (const auto& item : v)
    std::cout << item << " ";
  std::cout << "}" << std::endl;
}

static void do_test(const VI& integers, const VI& values, const VI& expected) {
  VI actual = remove_values(integers, values);
  std::cout << "Array integers: ";
  cout_vector(integers);
  std::cout << "Array values  : ";
  cout_vector(values);
  std::cout << "Array expected: ";
  cout_vector(expected);
  std::cout << "Array actual  : ";
  cout_vector(actual);
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
