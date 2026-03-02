/*
6 kyu
(L33T + Grεεκ) Case
https://www.codewars.com/kata/556025c8710009fc2d000011
*/

#include <algorithm>
#include <string>
#include <unordered_map>

std::string greekLeet(std::string str) {
  static std::unordered_map<char, std::string> translate = {
      {'a', "α"}, {'b', "β"}, {'d', "δ"}, {'e', "ε"}, {'i', "ι"}, {'k', "κ"},
      {'n', "η"}, {'o', "θ"}, {'p', "ρ"}, {'r', "π"}, {'t', "τ"}, {'u', "μ"},
      {'v', "υ"}, {'w', "ω"}, {'x', "χ"}, {'y', "γ"}};
  std::string result{""};
  result.reserve(str.size() * 3);
  std::transform(str.begin(), str.end(), str.begin(), ::tolower);
  for (char c : str) {
    if (translate.find(c) == translate.end())
      result += c;
    else
      result += translate[c];
  }
  return result;
}
