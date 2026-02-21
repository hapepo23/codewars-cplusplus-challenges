/*
8 kyu
Convert a Number to a String!
https://www.codewars.com/kata/5265326f5fda8eb1160004c8
*/

#include <cstdio>
#include <string>

std::string number_to_string(int num);

static void do_test(int num, const std::string& expected) {
  std::string actual = number_to_string(num);
  printf("For input = %d, expected \"%s\", actual \"%s\" -> %s\n", num,
         expected.c_str(), actual.c_str(), expected == actual ? "OK" : "FAIL");
}

int main() {
  do_test(1 + 2, "3");
  do_test(67, "67");
  do_test(-5, "-5");
  do_test(0, "0");
  return 0;
}
