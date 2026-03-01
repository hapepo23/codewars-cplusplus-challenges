/*
6 kyu
Rectangle into Squares
https://www.codewars.com/kata/55466989aeecab5aac00003e
*/

#include <vector>

class SqInRect {
 public:
  static std::vector<int> sqInRect(int lng, int wdth);
};

std::vector<int> SqInRect::sqInRect(int lng, int wdth) {
  std::vector<int> result;
  if (lng != wdth) {
    while (wdth != lng) {
      if (wdth > lng)
        std::swap(lng, wdth);
      int r = lng - wdth;
      result.push_back(wdth);
      lng = wdth;
      wdth = r;
    }
    result.push_back(wdth);
  }
  return result;
}
