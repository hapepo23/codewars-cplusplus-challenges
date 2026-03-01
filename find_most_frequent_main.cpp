/*
6 kyu
Find most frequent element in a list
https://www.codewars.com/kata/59b1314d44a4b7b93b000073
*/

#include <forward_list>
#include <iostream>
#include <utility>

std::pair<int, int> findMostFrequent(const std::forward_list<int>& l);

static void do_test(const std::forward_list<int>& l,
                    const std::pair<int, int>& expected) {
  std::pair<int, int> actual = findMostFrequent(l);
  std::cout << "expected: " << expected.first << ", " << expected.second
            << std::endl;
  std::cout << "actual  : " << actual.first << ", " << actual.second
            << std::endl;
  std::cout << (expected == actual ? "OK" : "FAIL") << std::endl << std::endl;
}

int main() {
  {
    std::forward_list<int> l = {1, 2, 3, 4, 2, 3, 2};
    std::pair<int, int> expected = {2, 3};
    do_test(l, expected);
  }
  {
    std::forward_list<int> l = {4, 3, 5, 3, 4, 5};
    std::pair<int, int> expected = {4, 2};
    do_test(l, expected);
  }
  {
    std::forward_list<int> l = {1, 2, 3, 4, 3, 5, 5, 3};
    std::pair<int, int> expected = {3, 3};
    do_test(l, expected);
  }
  return 0;
}
