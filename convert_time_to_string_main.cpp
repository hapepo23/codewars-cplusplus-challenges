/*
7 kyu
Convert Time to String
https://www.codewars.com/kata/5502ddd734137e90af000f62
*/

#include <iostream>
#include <string>

std::string convertTime(int timeDiff);

static void do_test(int timeDiff, const std::string& expected) {
  std::string actual = convertTime(timeDiff);
  std::cout << "Time in seconds: " << timeDiff << "" << std::endl
            << "Expected string; \"" << expected << "\"" << std::endl
            << "Actual string  : \"" << actual << "\"" << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test(90061, "1 1 1 1");
  do_test(-90061, "-1 -1 -1 -1");
  do_test(1, "0 0 0 1");
  do_test(-1, "0 0 0 -1");
  do_test(59, "0 0 0 59");
  do_test(60, "0 0 1 0");
  do_test(3599, "0 0 59 59");
  do_test(3600, "0 1 0 0");
  do_test(-86399, "0 -23 -59 -59");
  do_test(86400, "1 0 0 0");
  return 0;
}
