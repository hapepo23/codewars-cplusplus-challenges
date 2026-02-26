/*
8 kyu
How good are you really?
https://www.codewars.com/kata/5601409514fc93442500010b
*/

#include <iostream>
#include <vector>

using vec = std::vector<int>;

bool betterThanAverage(vec classPoints, int yourPoints);

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

static std::string bool_to_word(const bool value) {
  return value ? "true" : "false";
}

static void do_test(const vec& classPoints,
                    const int yourPoints,
                    const bool expected) {
  bool actual = betterThanAverage(classPoints, yourPoints);
  std::cout << "Class points: " << classPoints << std::endl;
  std::cout << "Your points: " << yourPoints << std::endl;
  std::cout << "Better expected: " << bool_to_word(expected) << std::endl;
  std::cout << "Better actual: " << bool_to_word(actual) << std::endl;
  std::cout << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test(vec{2, 3}, 5, true);
  do_test(vec{100, 40, 34, 57, 29, 72, 57, 88}, 75, true);
  do_test(vec{12, 23, 34, 45, 56, 67, 78, 89, 90}, 69, true);
  do_test(vec{41, 75, 72, 56, 80, 82, 81, 33}, 50, false);
  do_test(vec{29, 55, 74, 60, 11, 90, 67, 28}, 21, false);
  return 0;
}
