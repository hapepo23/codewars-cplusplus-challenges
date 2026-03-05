/*
5 kyu
Rot13
https://www.codewars.com/kata/530e15517bc88ac656000716
*/

#include <cstdio>
#include <string>

std::string rot13(const std::string& msg);

static void do_test(const std::string& msg, const std::string& expected) {
  std::string actual = rot13(msg);
  printf("Msg = %s, expected: %s, actual: %s --> %s\n", msg.c_str(),
         expected.c_str(), actual.c_str(), expected == actual ? "OK" : "FAIL");
}

int main() {
  do_test("test", "grfg");
  do_test("Test", "Grfg");
  do_test("AbCd", "NoPq");
  return 0;
}
