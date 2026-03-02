/*
7 kyu
Pyramid Structure Analyzer
https://www.codewars.com/kata/66bb6583ac1620f505a8e31b
*/

#include <iostream>
#include <tuple>

std::tuple<int, int, int, int> pyramid(int s);

static void do_test(int s, std::tuple<int, int, int, int> expected) {
  std::tuple<int, int, int, int> actual = pyramid(s);
  std::cout << "s = " << s << " -> " << (expected == actual ? "OK" : "FAIL")
            << std::endl;
}

int main() {
  do_test(14, std::tuple{4, 6, 4, 3});
  do_test(18, std::tuple{5, 8, 5, 4});
  do_test(22, std::tuple{6, 10, 6, 5});
  do_test(42, std::tuple{11, 20, 11, 10});
  do_test(58, std::tuple{15, 28, 15, 14});
  do_test(98, std::tuple{25, 48, 25, 24});
  do_test(102, std::tuple{26, 50, 26, 25});
  return 0;
}
