/*
8 kyu
Sum Arrays
https://www.codewars.com/kata/53dc54212259ed3d4f00071c
*/

#include <cstdio>
#include <vector>

using vec = std::vector<int>;

int sum(const vec& nums);

static void do_test(const vec& nums, int expected) {
  int actual = sum(nums);
  printf("Array: {");
  for (const auto& num : nums)
    printf("%d ", num);
  printf("}, expected: %d, actual: %d --> %s\n", expected, actual,
         expected == actual ? "OK" : "FAIL");
}

int main() {
  do_test(vec{}, 0);
  do_test(vec{5}, 5);
  do_test(vec{-5}, -5);
  do_test(vec{1, 2, 3, 4}, 10);
  do_test(vec{1, 2, -3, 3, 4}, 7);
  return 0;
}
