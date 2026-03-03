/*
7 kyu
Shortest Word
https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9
*/

#include <cstdio>
#include <string>

int find_short(std::string str);

static void do_test(const std::string& str, const int expected) {
  int actual = find_short(str);
  printf("For string: \"%s\", expected: %d, actual: %d -> %s\n", str.c_str(),
         expected, actual, expected == actual ? "OK" : "FAIL");
}

int main() {
  do_test("bitcoin take over the world maybe who knows perhaps", 3);
  do_test("turns out random test cases are easier than writing out basic ones",
          3);
  do_test("lets talk about javascript the best language", 3);
  do_test("i want to travel the world writing code one day", 1);
  do_test("Lets all go on holiday somewhere very cold", 2);
  do_test("Let's travel abroad shall we", 2);
  return 0;
}
