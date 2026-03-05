/*
5 kyu
Lazy Repeater
https://www.codewars.com/kata/51fc3beb41ecc97ee20000c3
*/

#include <functional>
#include <iostream>
#include <string>

std::function<char()> makeLooper(const std::string& str);

static void do_test(const char actual, const char expected) {
  std::cout << "Expected: \"" << expected << "\", " << "Actual: \"" << actual
            << "\" " << "-> " << (expected == actual ? "OK" : "FAIL")
            << std::endl;
}

int main() {
  auto abc = makeLooper("abc");
  do_test(abc(), 'a');
  do_test(abc(), 'b');
  do_test(abc(), 'c');
  do_test(abc(), 'a');
  do_test(abc(), 'b');
  do_test(abc(), 'c');
  do_test(abc(), 'a');
  do_test(abc(), 'b');
  do_test(abc(), 'c');
  return 0;
}
