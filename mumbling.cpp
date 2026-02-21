/*
7 kyu
Mumbling
https://www.codewars.com/kata/5667e8f4e3f572a8f2000039
*/

#include <cctype>
#include <string>

class Accumul {
 public:
  static std::string accum(const std::string& s);
};

std::string Accumul::accum(const std::string& s) {
  std::string result;
  const size_t l = s.size();
  result.reserve((l * (l + 1)) / 2 + l - 1);
  for (size_t i = 0; i < l; ++i) {
    if (i > 0)
      result += '-';
    result += static_cast<char>(std::toupper(s[i]));
    result.append(i, static_cast<char>(std::tolower(s[i])));
  }
  return result;
}
