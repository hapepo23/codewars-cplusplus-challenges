/*
6 kyu
Unique In Order
https://www.codewars.com/kata/54e6533c92449cc251001667
*/

/* --- My solution --- */

#include <string>
#include <vector>

using VC = std::vector<char>;

template <typename T>
std::vector<T> uniqueInOrder(const std::vector<T>& iterable) {
  std::vector<T> result;
  size_t l = iterable.size();
  for (size_t i = 0; i < l; ++i)
    if (i == 0 || (i > 0 && iterable[i] != iterable[i - 1]))
      result.push_back(iterable[i]);
  return result;
}

VC uniqueInOrder(const std::string& iterable) {
  VC result;
  size_t l = iterable.size();
  for (size_t i = 0; i < l; ++i)
    if (i == 0 || (i > 0 && iterable[i] != iterable[i - 1]))
      result.push_back(iterable[i]);
  return result;
}

/* --- Better solution ---

#include <algorithm>
#include <string>
#include <vector>

using VC = std::vector<char>;

template <typename T>
std::vector<T> uniqueInOrder(const std::vector<T>& iterable) {
  std::vector<T> result;
  std::unique_copy(iterable.begin(), iterable.end(),
                   std::back_inserter(result));
  return result;
}

VC uniqueInOrder(const std::string& iterable) {
  VC result;
  std::unique_copy(iterable.begin(), iterable.end(),
                   std::back_inserter(result));
  return result;
}

*/