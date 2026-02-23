/*
8 kyu
How good are you really?
https://www.codewars.com/kata/5601409514fc93442500010b
*/

#include <vector>

using vec = std::vector<int>;

bool betterThanAverage(vec classPoints, int yourPoints) {
  double result = static_cast<double>(yourPoints);
  for (const auto& p : classPoints)
    result += p;
  return static_cast<double>(yourPoints) > (result / (classPoints.size() + 1));
}
