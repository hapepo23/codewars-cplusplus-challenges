/*
5 kyu
Build a quadratic equation
https://www.codewars.com/kata/60a9148187cfaf002562ceb8
*/

#include <iostream>
#include <string>

std::string quadratic_builder(const std::string& expression);

static void do_test(const std::string& expression,
                    const std::string& expected) {
  std::string actual = quadratic_builder(expression);
  std::cout << "Given   : " << expression << std::endl
            << "Expected: " << expected << std::endl
            << "Actual  : " << actual << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test("(x+2)(x+3)", "x^2+5x+6");
  do_test("(x-2)(x+7)", "x^2+5x-14");
  do_test("(3y+2)(y+5)", "3y^2+17y+10");
  do_test("(-h-7)(4h+3)", "-4h^2-31h-21");
  do_test("(x+0)(x+1)", "x^2+x");
  do_test("(2q+3)(2q-3)", "4q^2-9");
  do_test("(0p+1)(p+0)", "p");
  do_test("(0z+1)(0z+1)", "1");
  do_test("(a+0)(a+0)", "a^2");
  return 0;
}
