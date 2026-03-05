/*
6 kyu
Combinations Produced by n Coin Flips
https://www.codewars.com/kata/629509fc033da70016b88741
*/

#include <bitset>
#include <cmath>
#include <string>
#include <vector>

#define MAXL 10

std::vector<std::string> coin_flips(int flips) {
  std::vector<std::string> result;
  if (flips >= 1 && flips <= MAXL) {
    int size = (int)pow(2., (double)flips);
    result.reserve(size);
    for (int i = 0; i < size; ++i) {
      std::bitset<MAXL> bs = i;
      result.push_back(bs.to_string('H', 'T').substr(MAXL - flips, flips));
    }
  } else {
    result.push_back("");
  }
  return result;
}
