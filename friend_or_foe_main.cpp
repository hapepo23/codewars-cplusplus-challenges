/*
7 kyu
Friend or Foe?
https://www.codewars.com/kata/55b42574ff091733d900002f
*/

#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> friendOrFoe(const std::vector<std::string>& input);

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

static void do_test(const std::vector<std::string>& input,
                    const std::vector<std::string>& expected) {
  std::vector<std::string> actual = friendOrFoe(input);
  std::cout << "Input   : " << input << std::endl;
  std::cout << "Expected: " << expected << std::endl;
  std::cout << "Actual  : " << actual << std::endl;
  std::cout << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test({"Ryan", "Kieran", "Jason", "Yous"}, {"Ryan", "Yous"});
  do_test({"Eminem", "Pete", "Alan", "Jesus", "Homer Simpson"},
          {"Pete", "Alan"});
  return 0;
}
