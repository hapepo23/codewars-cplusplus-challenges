/*
7 kyu
Find Count of Most Frequent Item in an Array
https://www.codewars.com/kata/56582133c932d8239900002e
*/

#include <iostream>
#include <vector>

unsigned int most_frequent_item_count(const std::vector<int>& collection);

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

static void do_test(const std::vector<int>& collection, unsigned int expected) {
  unsigned int actual = most_frequent_item_count(collection);
  std::cout << "Collection : " << collection << std::endl;
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
