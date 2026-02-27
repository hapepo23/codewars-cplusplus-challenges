/*
6 kyu
Multiple of 11
https://www.codewars.com/kata/581f12491bbdd0ca45000070
*/

#include <iostream>
#include <string>

bool eleven(const std::string& input);

static void do_test(const std::string& input, const bool expected) {
  bool actual = eleven(input);
  std::cout << "Number: " << input << std::endl
            << "Expected: " << (expected ? "true" : "false")
            << ", actual: " << (actual ? "true" : "false") << " -> "
            << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test("11", true);
  do_test("3800", false);
  do_test("323455693", true);
  do_test("30800", true);
  do_test("654986546516", false);
  do_test("22", true);
  do_test("12376538933", true);
  do_test("112233", true);
  do_test("112233456", false);
  do_test("6549865989546546544564698566546546846516546548946545646546546516",
          false);
  do_test(
      "654986598954654654456469856654654684651654654894654564654654651665498659"
      "895465465445646985665465468465165465489465456465465465166549865989546546"
      "544564698566546546846516546548946545646546546516654986598954654654456469"
      "8566546546846516546548946545646546546516",
      false);
  do_test("112233445566778899", true);
  do_test("0000000011", true);
  do_test("14927", true);
  do_test("1727", true);
  return 0;
}
