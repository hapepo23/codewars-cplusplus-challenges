/*
8 kyu
Convert boolean values to strings 'Yes' or 'No'.
https://www.codewars.com/kata/53369039d7ab3ac506000467
*/

#include <cstdio>
#include <string>

std::string bool_to_word(bool value);

static void do_test(bool value, const std::string& expected) {
  std::string actual = bool_to_word(value);
  printf("Value: %d, expected: %s, actual: %s --> %s\n", value,
         expected.c_str(), actual.c_str(),
         expected.compare(actual) == 0 ? "OK" : "FAIL");
}

int main() {
  do_test(true, "Yes");
  do_test(false, "No");
  return 0;
}
