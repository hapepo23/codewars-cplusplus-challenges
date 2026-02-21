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
  std::string result{""};
  int n{0};
  for (const char& c : s) {
    n++;
    char cl = tolower(c);
    if (n > 1)
      result += '-';
    result += toupper(c);
    for (int i = 1; i < n; i++) {
      result += cl;
    }
  }
  return result;
}
