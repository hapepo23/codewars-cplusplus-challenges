/*
8 kyu
Find the smallest integer in the array
https://www.codewars.com/kata/55a2d7ebe362935a210000b2
*/

#include <algorithm>
#include <vector>

using namespace std;
using vec = vector<int>;

int findSmallest(const vec& list) {
  return *min_element(list.begin(), list.end());
}
