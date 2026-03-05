/*
6 kyu
Combinations Produced by n Coin Flips
https://www.codewars.com/kata/629509fc033da70016b88741
*/

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> coin_flips(int flips);

template <typename T>
static std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
  os << "{";
  for (size_t i = 0; i < v.size(); ++i) {
    os << v[i];
    if (i + 1 < v.size())
      os << ", ";
  }
  os << "}";
  return os;
}

static void do_test(int flips, const std::vector<std::string>& expected) {
  std::vector<std::string> actual = coin_flips(flips);
  std::sort(actual.begin(), actual.end());
  std::cout << "Flips   : " << flips << std::endl;
  std::cout << "Expected: " << expected << std::endl;
  std::cout << "Actual  : " << actual << std::endl;
  std::cout << (expected == actual ? "OK" : "FAIL") << std::endl << std::endl;
}

int main() {
  do_test(2, {"HH", "HT", "TH", "TT"});
  do_test(3, {"HHH", "HHT", "HTH", "HTT", "THH", "THT", "TTH", "TTT"});
  do_test(0, {""});
  return 0;
}
