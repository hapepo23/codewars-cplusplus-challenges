/*
6 kyu
Unique In Order
https://www.codewars.com/kata/54e6533c92449cc251001667
*/

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using VI = std::vector<int>;
using VC = std::vector<char>;

VC uniqueInOrder(const std::string& iterable);

template <typename T>
std::vector<T> uniqueInOrder(const std::vector<T>& iterable) {
  std::vector<T> result;
  size_t l = iterable.size();
  for (size_t i = 0; i < l; ++i)
    if (i == 0 || (i > 0 && iterable[i] != iterable[i - 1]))
      result.push_back(iterable[i]);
  return result;
}

/* --- Better solution ---

template <typename T>
std::vector<T> uniqueInOrder(const std::vector<T>& iterable) {
  std::vector<T> result;
  std::unique_copy(iterable.begin(), iterable.end(),
                   std::back_inserter(result));
  return result;
}

*/

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

template <typename T>
static void do_test2(const std::vector<T>& iterable,
                     const std::vector<T>& expected) {
  std::vector<T> actual = uniqueInOrder(iterable);
  std::cout << "Input   : " << iterable << std::endl;
  std::cout << "Expected: " << expected << std::endl;
  std::cout << "Actual  : " << actual << std::endl;
  std::cout << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

static void do_test(const std::string& iterable, const VC& expected) {
  VC actual = uniqueInOrder(iterable);
  std::cout << "Input   : " << iterable << std::endl;
  std::cout << "Expected: " << expected << std::endl;
  std::cout << "Actual  : " << actual << std::endl;
  std::cout << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test("", VC{});
  do_test("AA", VC{'A'});
  do_test("A", VC{'A'});
  do_test("AAAABBBCCDAABBB", VC{'A', 'B', 'C', 'D', 'A', 'B'});
  do_test("AADD", VC{'A', 'D'});
  do_test("AAD", VC{'A', 'D'});
  do_test("ADD", VC{'A', 'D'});
  do_test("ABBCcAD", VC{'A', 'B', 'C', 'c', 'A', 'D'});
  do_test2(VI{1, 2, 3, 3}, VI{1, 2, 3});
  do_test2(VC{'a', 'b', 'b'}, VC{'a', 'b'});
  return 0;
}
