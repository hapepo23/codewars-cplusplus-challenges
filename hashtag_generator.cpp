/*
5 kyu
The Hashtag Generator
https://www.codewars.com/kata/52449b062fb80683ec000024
*/

#include <cctype>
#include <optional>
#include <sstream>
#include <string>

using str_t = std::string;
using opt_str_t = std::optional<str_t>;

opt_str_t generate_hashtag(const str_t& str) {
  std::istringstream iss(str);
  str_t result;
  result.reserve(str.size() + 1);
  for (str_t token; iss >> token;) {
    token[0] =
        static_cast<char>(std::toupper(static_cast<unsigned char>(token[0])));
    for (size_t i = 1; i < token.size(); ++i) {
      token[i] =
          static_cast<char>(std::tolower(static_cast<unsigned char>(token[i])));
    }
    if (result.empty())
      result.push_back('#');
    result += token;
  }
  if (result.empty() || result.size() > 140)
    return std::nullopt;
  return result;
}