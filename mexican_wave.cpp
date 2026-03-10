/*
6 kyu
Mexican Wave
https://www.codewars.com/kata/58f5c63f1e26ecda7e000029
*/

#include <cctype>
#include <string>
#include <vector>

std::vector<std::string> wave(const std::string& y) {
  std::vector<std::string> result;
  result.reserve(y.size());
  for (size_t i = 0; i < y.size(); ++i) {
    if (!std::isspace(static_cast<unsigned char>(y[i]))) {
      std::string s = y;
      s[i] = std::toupper(static_cast<unsigned char>(s[i]));
      result.emplace_back(std::move(s));
    }
  }
  return result;
}
