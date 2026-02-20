/*
8 kyu
Convert boolean values to strings 'Yes' or 'No'.
https://www.codewars.com/kata/53369039d7ab3ac506000467
*/

#include <string>

std::string bool_to_word(bool value) {
  return value ? "Yes" : "No";
}
