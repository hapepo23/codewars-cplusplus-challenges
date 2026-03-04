/*
7 kyu
Number of People in the Bus
https://www.codewars.com/kata/5648b12ce68d9daa6b000099
*/

#include <cstdio>
#include <utility>
#include <vector>

using V = std::pair<int, int>;
using V2 = std::vector<V>;

unsigned int number(const V2& busStops);

static void do_test(const V2& busStops, unsigned int expected) {
  unsigned int actual = number(busStops);
  printf("Bus Stops: { ");
  for (const V& bs : busStops) {
    printf("{in:%d, out:%d} ", bs.first, bs.second);
  }
  printf("}\nExpected: %d, actual: %d --> %s\n\n", expected, actual,
         expected == actual ? "OK" : "FAIL");
}

int main() {
  do_test(V2{V{10, 0}, V{3, 5}, V{5, 8}}, 5);
  do_test(V2{V{3, 0}, V{9, 1}, V{4, 10}, V{12, 2}, V{6, 1}, V{7, 10}}, 17);
  do_test(V2{V{3, 0}, V{9, 1}, V{4, 8}, V{12, 2}, V{6, 1}, V{7, 8}}, 21);
  do_test(V2{V{0, 0}}, 0);
  do_test(V2{V{10, 0}, V{13, 0}, V{17, 40}}, 0);
  return 0;
}
