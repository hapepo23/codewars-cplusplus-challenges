/*
8 kyu
Get the mean of an array
https://www.codewars.com/kata/563e320cee5dddcf77000158
*/

#include <numeric>
#include <vector>

using VI = std::vector<int>;

int get_average(const VI& marks) {
  if (marks.size() == 0)
    return 0;
  return std::reduce(marks.begin(), marks.end()) / marks.size();
}
