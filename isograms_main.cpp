/*
7 kyu
Isograms
https://www.codewars.com/kata/54ba84be607a92aa900000f1
*/

#include <cstdio>
#include <string>

bool is_isogram(const std::string& str);

static void do_test(const std::string& str, const bool expected) {
  bool actual = is_isogram(str);
  printf("String: %s, expected: %s, actual: %s --> %s\n", str.c_str(),
         expected ? "true" : "false", actual ? "true" : "false",
         expected == actual ? "OK" : "FAIL");
}

int main() {
  do_test("", true);
  do_test("a", true);
  do_test("X", true);
  do_test("ab", true);
  do_test("Ba", true);
  do_test("acb", true);
  do_test("GROWTH", true);
  do_test("isogram", true);
  do_test("Dermatoglyphics", true);
  do_test("thumbscrewjapingly", true);
  do_test("acdefghijklmnopqrstuvwxBz", true);
  do_test("abcdefghijklmnopqrstuvwxyz", true);
  do_test("ABCDEFGHIJKLMNOPQRSTUVWXYZ", true);
  do_test("aa", false);
  do_test("aA", false);
  do_test("aba", false);
  do_test("ZzZ", false);
  do_test("moose", false);
  do_test("moOse", false);
  do_test("uNIQUe", false);
  do_test("roboto", false);
  do_test("parmesan", false);
  do_test("LIPGLOSS", false);
  do_test("isIsogram", false);
  do_test("abcdefghijklmnopqrstuwwxyz", false);
  do_test("abcdefghijklmnopqrstuvwxyzA", false);
  do_test("ABCDEFGHIJKLMNOPQRSTUVWXYZh", false);
  return 0;
}
