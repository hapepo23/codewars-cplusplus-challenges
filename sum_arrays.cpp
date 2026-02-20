/*
8 kyu
Sum Arrays
https://www.codewars.com/kata/53dc54212259ed3d4f00071c
*/

#include <vector>

int sum(const std::vector<int>& nums) {
  int result{0};
  for (const auto& num : nums)
    result += num;
  return result;
}
