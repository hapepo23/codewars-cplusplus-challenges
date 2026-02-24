/*
7 kyu
Find Count of Most Frequent Item in an Array
https://www.codewars.com/kata/56582133c932d8239900002e
*/

#include <iostream>
#include <vector>

unsigned int most_frequent_item_count(const std::vector<int>& collection);

template <typename T>
void cout_vector(const std::vector<T>& v) {
  std::cout << "{ ";
  for (const auto& item : v)
    std::cout << item << " ";
  std::cout << "}" << std::endl;
}

static void do_test(const std::vector<int>& collection, unsigned int expected) {
  unsigned int actual = most_frequent_item_count(collection);
  std::cout << "Collection : ";
  cout_vector(collection);
  std::cout << "Expected: " << expected << ", actual  : " << actual << " -> "
            << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  std::vector<int> collection = {3, -1, -1};
  do_test(collection, 2);
  collection = {3, -1, -1, -1, 2, 3, -1, 3, -1, 2, 4, 9, 3};
  do_test(collection, 5);
  collection = {};
  do_test(collection, 0);
  collection = {9};
  do_test(collection, 1);
  return 0;
}
