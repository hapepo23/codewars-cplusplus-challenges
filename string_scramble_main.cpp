/*
7 kyu
String Scramble
https://www.codewars.com/kata/5822d89270ca28c85c0000f3
*/

#include <cstddef>
#include <iostream>
#include <string>
#include <vector>

std::string scramble(const std::string& str,
                     const std::vector<std::size_t>& indices);

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

static void do_test(const std::string& str,
                    const std::vector<std::size_t>& indices,
                    const std::string& expected) {
  std::string actual = scramble(str, indices);
  std::cout << "String  : " << str << std::endl
            << "Indices : " << indices << std::endl
            << "Expected: " << expected << std::endl
            << "Actual  : " << actual << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test("abcd", {0, 3, 1, 2}, "acdb");
  do_test("sc301s", {4, 0, 3, 1, 5, 2}, "c0s3s1");
  do_test("bskl5", {2, 1, 4, 3, 0}, "5sblk");
  return 0;
}
