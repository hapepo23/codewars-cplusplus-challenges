/*
6 kyu
Make the Deadfish Swim
https://www.codewars.com/kata/51e0007c1f9378fa810002a9
*/

#include <string_view>
#include <vector>

std::vector<int> parse(std::string_view data) {
  std::vector<int> result;
  int value{0};
  for (char c : data) {
    switch (c) {
      case 'i':
        ++value;
        break;
      case 'd':
        --value;
        break;
      case 's':
        value *= value;
        break;
      case 'o':
        result.push_back(value);
        break;
      default:
        break;
    }
  }
  return result;
}
