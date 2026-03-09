/*
6 kyu
Common array elements
https://www.codewars.com/kata/5a6225e5d8e145b540000127
*/

#include <algorithm>
#include <unordered_map>
#include <vector>

using VI = std::vector<int>;
using UMII = std::unordered_map<int, int>;

int common(const VI& a, const VI& b, const VI& c) {
  UMII a_counts, b_counts, c_counts;
  for (const int& a_item : a)
    ++a_counts[a_item];
  for (const int& b_item : b)
    ++b_counts[b_item];
  for (const int& c_item : c)
    ++c_counts[c_item];
  int result{0};
  for (auto a_it = a_counts.begin(); a_it != a_counts.end(); a_it++)
    if (b_counts.find(a_it->first) != b_counts.end() &&
        c_counts.find(a_it->first) != c_counts.end())
      result +=
          a_it->first * std::min({a_counts[a_it->first], b_counts[a_it->first],
                                  c_counts[a_it->first]});
  return result;
}
