/*
7 kyu
Descending Order
https://www.codewars.com/kata/5467e4d82edf8bbf40000155
*/

#include <cinttypes>
#include <cstdio>

uint64_t descendingOrder(uint64_t a);

static void do_test(uint64_t a, uint64_t expected) {
  uint64_t actual = descendingOrder(a);
  printf("Number: %" PRIu64 ", expected: %" PRIu64 ", actual: %" PRIu64
         " --> %s\n",
         a, expected, actual, expected == actual ? "OK" : "FAIL");
}

int main() {
  do_test(0, 0);
  do_test(1, 1);
  do_test(15, 51);
  do_test(1021, 2110);
  do_test(123456789, 987654321);
  return 0;
}
