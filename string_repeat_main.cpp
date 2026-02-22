/*
8 kyu
String repeat
https://www.codewars.com/kata/57a0e5c372292dd76d000d7e
*/

#include <iostream>
#include <string>

std::string repeat_str(size_t repeat, const std::string& str);

static void do_test(size_t repeat,
                    const std::string& str,
                    const std::string& expected) {
  std::string actual = repeat_str(repeat, str);
  std::cout << "Repeat  : " << repeat << std::endl
            << "String  : \"" << str << "\"" << std::endl
            << "Expected: \"" << expected << "\"" << std::endl
            << "Actual  : \"" << actual << "\"" << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test(3, "*", "***");
  do_test(5, "#", "#####");
  do_test(2, "ha ", "ha ha ");
  do_test(5, ">", ">>>>>");
  do_test(10, "!", "!!!!!!!!!!");
  do_test(3, "hello ", "hello hello hello ");
  do_test(3, "$", "$$$");
  do_test(5, "a", "aaaaa");
  do_test(6, "A", "AAAAAA");
  do_test(7, "aA", "aAaAaAaAaAaAaA");
  do_test(3, "", "");
  do_test(0, "null", "");
  do_test(0, "", "");
  do_test(6, "I", "IIIIII");
  do_test(5, "Hello", "HelloHelloHelloHelloHello");
  return 0;
}
