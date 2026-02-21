/*
7 kyu
Correct the time-string
https://www.codewars.com/kata/57873ab5e55533a2890000c7
*/

#include <iostream>
#include <string>

std::string correct(const std::string& timeString);

static void do_test(const std::string& timeString,
                    const std::string& expected) {
  std::string actual = correct(timeString);
  std::cout << "String  : \"" << timeString << "\"" << std::endl
            << "Expected: \"" << expected << "\"" << std::endl
            << "Actual  : \"" << actual << "\"" << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test("", "");
  do_test("001122", "");
  do_test("00;11;22", "");
  do_test("0a:1c:22", "");
  do_test("09:10:01", "09:10:01");
  do_test("11:70:10", "12:10:10");
  do_test("19:99:99", "20:40:39");
  do_test("24:01:01", "00:01:01");
  do_test("52:01:01", "04:01:01");
  return 0;
}
