/*
7 kyu
Number of People in the Bus
https://www.codewars.com/kata/5648b12ce68d9daa6b000099
*/

#include <utility>
#include <vector>

using V = std::pair<int, int>;
using V2 = std::vector<V>;

unsigned int number(const V2& busStops) {
  unsigned int result{0};
  for (const V& bs : busStops)
    result = result + bs.first - bs.second;
  return result;
}
