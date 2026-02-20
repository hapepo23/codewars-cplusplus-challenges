/*
4 kyu
Number of Proper Fractions with Denominator d
https://www.codewars.com/kata/55b7bb74a0256d4467000070
*/

#include <cstdio>

long properFractions(long n);

static void doTest(long input, long expected) {
  long actual = properFractions(input);
  printf("For input = %ld, expected %ld, but got %ld -> %s\n", input, expected,
         actual, (expected == actual ? "OK" : "FAIL"));
}

int main() {
  doTest(1, 0);
  doTest(2, 1);
  doTest(3, 2);
  doTest(5, 4);
  doTest(6, 2);
  doTest(10, 4);
  doTest(12, 4);
  doTest(15, 8);
  doTest(30, 8);
  doTest(60, 16);
  doTest(25, 20);
  doTest(9999, 6000);
  doTest(9999999, 6637344);
  return 0;
}
