/*
6 kyu
Duplicate Encoder
https://www.codewars.com/kata/54b42f9314d9229fd6000d9c
*/

#include <iostream>
#include <string>

std::string duplicate_encoder(const std::string& word);

static void do_test(const std::string& word, const std::string& expected) {
  std::string actual = duplicate_encoder(word);
  std::cout << "String  : \"" << word << "\"" << std::endl
            << "Expected: \"" << expected << "\"" << std::endl
            << "Actual  : \"" << actual << "\"" << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test("din", "(((");
  do_test("recede", "()()()");
  do_test("Success", ")())())");
  do_test("CodeWarrior", "()(((())())");
  do_test("Supralapsarian", ")()))()))))()(");
  do_test("(( @", "))((");
  do_test(" ( ( )", ")))))(");
  return 0;
}
