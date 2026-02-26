/*
7 kyu
Sort array by string length
https://www.codewars.com/kata/57ea5b0b75ae11d1e800006c
*/

#include <iostream>
#include <string>
#include <vector>

using VS = std::vector<std::string>;

VS sortByLength(const VS& array);

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

static void do_test(const VS& array, const VS& expected) {
  VS actual = sortByLength(array);
  std::cout << "Array   : " << array << std::endl
            << "Expected: " << expected << std::endl
            << "Actual  : " << actual << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test({"Beg", "Life", "I", "To"}, {"I", "To", "Beg", "Life"});
  do_test({"", "Moderately", "Brains", "Pizza"},
          {"", "Pizza", "Brains", "Moderately"});
  do_test({"Longer", "Longest", "Short"}, {"Short", "Longer", "Longest"});
  return 0;
}
