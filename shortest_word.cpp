/*
7 kyu
Shortest Word
https://www.codewars.com/kata/57cebe1dc6fdc20c57000ac9
*/

#include <climits>
#include <sstream>
#include <string>

int find_short(std::string str) {
  std::stringstream ss(str);
  std::string token;
  int result{INT_MAX};
  while (std::getline(ss, token, ' '))
    if ((int)token.size() < result)
      result = (int)token.size();
  return result;
}
