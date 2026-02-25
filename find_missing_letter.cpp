/*
6 kyu
Find the missing letter
https://www.codewars.com/kata/5839edaa6754d6fec10000a2
*/

#include <vector>

char findMissingLetter(const std::vector<char>& chars) {
  for (auto pc = chars.begin() + 1; pc != chars.end(); ++pc) {
    if (*pc - *(pc - 1) > 1) {
      return *pc - 1;
    }
  }
  return ' ';  // should not happen
}
