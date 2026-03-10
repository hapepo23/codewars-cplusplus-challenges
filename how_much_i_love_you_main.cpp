/*
8 kyu
I love you, a little , a lot, passionately ... not at all
https://www.codewars.com/kata/57f24e6a18e9fad8eb000296
*/

#include <iostream>
#include <string>

std::string how_much_i_love_you(int nb_petals);

static void do_test(int nb_petals, const std::string& expected) {
  std::string actual = how_much_i_love_you(nb_petals);
  std::cout << "Number of petals: " << nb_petals << std::endl
            << "Expected        : \"" << expected << "\"" << std::endl
            << "Actual          : \"" << actual << "\"" << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test(7, "I love you");
  do_test(3, "a lot");
  do_test(6, "not at all");
  return 0;
}
