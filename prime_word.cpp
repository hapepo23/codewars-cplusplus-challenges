/*
6 kyu
Prime Word
https://www.codewars.com/kata/5b1e2c04553292dacd00009e
*/

#include <string>
#include <utility>
#include <vector>

static bool is_prime(int num) {
  if (num <= 1)
    return false;
  if (num == 2 || num == 3)
    return true;
  if (num % 2 == 0 || num % 3 == 0)
    return false;
  for (int i = 5; i * i <= num; i = i + 6)
    if (num % i == 0 || num % (i + 2) == 0)
      return false;
  return true;
}

std::vector<int> prime_word(
    const std::vector<std::pair<std::string, int>>& list) {
  std::vector<int> result;
  for (const auto& l : list) {
    int p{0};
    for (const char c : l.first) {
      if (is_prime(c + l.second))
        ++p;
    }
    result.push_back(p > 0 ? 1 : 0);
  }
  return result;
}
