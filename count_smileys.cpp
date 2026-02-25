/*
6 kyu
Count the smiley faces!
https://www.codewars.com/kata/583203e6eb35d7980400002a
*/

#include <string>
#include <vector>

int countSmileys(const std::vector<std::string>& arr) {
  const std::vector<std::string> matches = {":)",  ":~)", ":-)", ":D",
                                            ":~D", ":-D", ";)",  ";~)",
                                            ";-)", ";D",  ";~D", ";-D"};
  int result{0};
  for (const auto& match_item : matches) {
    for (const auto& arr_item : arr) {
      if (arr_item == match_item)
        result++;
    }
  }
  return result;
}