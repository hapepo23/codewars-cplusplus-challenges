/*
6 kyu
Are they the "same"?
https://www.codewars.com/kata/550498447451fbbd7600041c
*/

#include <iostream>
#include <vector>

using VI = std::vector<int>;

class Same {
 public:
  static bool comp(VI& a, VI& b);
};

template <typename T>
void cout_vector(const std::vector<T>& v) {
  std::cout << "{ ";
  for (const auto& item : v)
    std::cout << item << " ";
  std::cout << "}" << std::endl;
}

static void do_test(VI a, VI b, bool expected) {
  std::cout << "Array a : ";
  cout_vector(a);
  std::cout << "Array b : ";
  cout_vector(b);
  bool actual = Same::comp(a, b);
  std::cout << "Expected: " << (expected ? "true" : "false")
            << ", actual: " << (actual ? "true" : "false") << " -> "
            << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  VI a = {121, 144, 19, 161, 19, 144, 19, 11};
  VI b = {14641, 20736, 361, 25921, 361, 20736, 361, 121};
  do_test(a, b, true);
  a = {121, 144, 19, 161, 19, 144, 19, 11};
  b = {14641, 20736, 361, 25921, 361, 20736, 362, 121};
  do_test(a, b, false);
  a = {-121, 1440, 191, 161, 19, 144, 195, 11};
  b = {121, 14641, 2073600, 36481, 25921, 361, 20736, 38025};
  do_test(a, b, true);
  return 0;
}
