/*
6 kyu
Mexican Wave
https://www.codewars.com/kata/58f5c63f1e26ecda7e000029
*/

#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> wave(const std::string& y);

template <typename T>
static std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
  os << "{";
  for (size_t i = 0; i < v.size(); ++i) {
    os << "\"" << v[i] << "\"";
    if (i + 1 < v.size())
      os << ", ";
  }
  os << "}";
  return os;
}

static void do_test(const std::string& y,
                    const std::vector<std::string>& expected) {
  std::vector<std::string> actual = wave(y);
  std::cout << "String  : \"" << y << "\"" << std::endl
            << "Expected: " << expected << std::endl
            << "Actual  : " << actual << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test("hello", {"Hello", "hEllo", "heLlo", "helLo", "hellO"});
  do_test("codewars", {"Codewars", "cOdewars", "coDewars", "codEwars",
                       "codeWars", "codewArs", "codewaRs", "codewarS"});
  do_test("", {});
  do_test("two words", {"Two words", "tWo words", "twO words", "two Words",
                        "two wOrds", "two woRds", "two worDs", "two wordS"});
  do_test(" gap ", {" Gap ", " gAp ", " gaP "});
  return 0;
}
