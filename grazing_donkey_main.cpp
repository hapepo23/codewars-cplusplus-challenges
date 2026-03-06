/*
4 kyu
Grazing Donkey
https://www.codewars.com/kata/5b5ce2176d0db7331f0000c0
*/

#include <iostream>

int getRopeLength(int fieldDiameter, double eatenRatio);

static void do_test(int fieldDiameter, double eatenRatio, int expected) {
  int actual = getRopeLength(fieldDiameter, eatenRatio);
  std::cout << "Field Diameter         : " << fieldDiameter << std::endl
            << "Fraction of eaten grass: " << eatenRatio << std::endl
            << "Expected rope length   : " << expected << std::endl
            << "Actual rope length     : " << actual << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test(200, 0, 0);
  do_test(200, 1, 200);
  do_test(0, 0.0, 0);
  do_test(0, 0.5, 0);
  do_test(0, 1.0, 0);
  do_test(200, 0.5, 115);
  do_test(10, 0.5, 5);
  do_test(18358, 0.880000, 15725);
  do_test(91584, 0.060000, 16509);
  do_test(98925, 0.230000, 36585);
  do_test(1096520266, 0.570000, 689425034);
  do_test(1261987863, 0.610000, 828807809);
  do_test(1493556233, 0.020000, 152709280);
  return 0;
}
