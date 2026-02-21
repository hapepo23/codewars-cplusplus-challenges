/*
7 kyu
Mumbling
https://www.codewars.com/kata/5667e8f4e3f572a8f2000039
*/

#include <iostream>
#include <string>

class Accumul {
 public:
  static std::string accum(const std::string& s);
};

static void do_test(const std::string& s, const std::string& expected) {
  std::string actual = Accumul::accum(s);
  std::cout << "String  : \"" << s << "\"" << std::endl
            << "Expected: \"" << expected << "\"" << std::endl
            << "Actual  : \"" << actual << "\"" << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test("ZpglnRxqenU",
          "Z-Pp-Ggg-Llll-Nnnnn-Rrrrrr-Xxxxxxx-Qqqqqqqq-Eeeeeeeee-Nnnnnnnnnn-"
          "Uuuuuuuuuuu");
  do_test("NyffsGeyylB",
          "N-Yy-Fff-Ffff-Sssss-Gggggg-Eeeeeee-Yyyyyyyy-Yyyyyyyyy-Llllllllll-"
          "Bbbbbbbbbbb");
  return 0;
}
