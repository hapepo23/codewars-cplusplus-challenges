/*
7 kyu
String Scramble
https://www.codewars.com/kata/5822d89270ca28c85c0000f3
*/

#include <cstddef>
#include <string>
#include <vector>

std::string scramble(const std::string& str,
                     const std::vector<std::size_t>& indices) {
  std::string result{str};
  for (size_t i = 0; i < indices.size(); ++i)
    result[indices[i]] = str[i];
  return result;
}
