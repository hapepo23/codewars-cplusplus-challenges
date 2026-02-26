/*
6 kyu
Split Strings
https://www.codewars.com/kata/515de9ae9dcfc28eb6000001
*/

#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> solution(const std::string& s);

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

static void do_test(const std::string& s,
                    const std::vector<std::string>& expected) {
  std::vector<std::string> actual = solution(s);
  std::cout << "String  : \"" << s << "\"" << std::endl
            << "Expected: " << std::endl;
  std::cout << expected << std::endl;
  std::cout << "Actual: " << std::endl;
  std::cout << actual << std::endl;
  std::cout << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test("abcdef", {"ab", "cd", "ef"});
  do_test("HelloWorld", {"He", "ll", "oW", "or", "ld"});
  do_test("abcde", {"ab", "cd", "e_"});
  do_test("LovePizza", {"Lo", "ve", "Pi", "zz", "a_"});
  return 0;
}
