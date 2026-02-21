/*
8 kyu
Find the smallest integer in the array
https://www.codewars.com/kata/55a2d7ebe362935a210000b2
*/

#include <cstdio>
#include <vector>

using namespace std;
using vec = vector<int>;

int findSmallest(const vec& list);

static void do_test(const vec& list, int expected) {
  int actual = findSmallest(list);
  printf("Array: {");
  for (const auto& i : list)
    printf("%d ", i);
  printf("}, expected: %d, actual: %d --> %s\n", expected, actual,
         expected == actual ? "OK" : "FAIL");
}

int main() {
  do_test({3, 5, 2}, 2);
  do_test({7, 4, 6, 8}, 4);
  do_test({17, 21, 15, 36, 96}, 15);
  do_test({3, 9, 13, 10, 5, 3, 9, 5}, 3);
  do_test({-12, -52, -27}, -52);
  do_test({-3, -27, -4, -2, -27, -2}, -27);
  do_test({-16, -37, -8, -46, -29}, -46);
  do_test({-14, -102, -96, -36, -46, -15, -44}, -102);
  do_test({12, 0, -27}, -27);
  do_test({-13, -50, 57, 13, 67, -13, 57, 108, 67}, -50);
  do_test({-23, 12, 0, -47, -3, 24}, -47);
  return 0;
}
