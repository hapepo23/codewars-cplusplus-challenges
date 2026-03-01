/*
6 kyu
Rectangle into Squares
https://www.codewars.com/kata/55466989aeecab5aac00003e
*/

#include <iostream>
#include <vector>

class SqInRect {
 public:
  static std::vector<int> sqInRect(int lng, int wdth);
};

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

static void do_test(int lng, int wdth, const std::vector<int>& expected) {
  std::vector<int> actual = SqInRect::sqInRect(lng, wdth);
  std::cout << "Rectangle       : " << lng << " x " << wdth << std::endl
            << "Result expected : " << expected << std::endl
            << "Result actual   : " << actual << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test(5, 5, {});
  do_test(5, 3, {3, 2, 1, 1});
  do_test(20, 14, {14, 6, 6, 2, 2, 2});
  return 0;
}
