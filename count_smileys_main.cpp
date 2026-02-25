/*
6 kyu
Count the smiley faces!
https://www.codewars.com/kata/583203e6eb35d7980400002a
*/

#include <iostream>
#include <string>
#include <vector>

int countSmileys(const std::vector<std::string>& arr);

template <typename T>
static void cout_vector(const std::vector<T>& v) {
  std::cout << "[ ";
  for (const auto& item : v)
    std::cout << item << " ";
  std::cout << "]" << std::endl;
}

static void do_test(const std::vector<std::string>& arr, const int expected) {
  int actual = countSmileys(arr);
  std::cout << "Array of Emojis: ";
  cout_vector(arr);
  std::cout << "Expected: " << expected << ", actual: " << actual << " -> "
            << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test({}, 0);
  do_test({":D", ":~)", ";~)", ":)"}, 4);
  do_test({":)", ":(", ":D", ":O", ":;"}, 2);
  do_test({";]", ":[", ";*", ":$", ";-D"}, 1);
  return 0;
}
