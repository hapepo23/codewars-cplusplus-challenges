/*
8 kyu
Remove First and Last Character
https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0
*/

#include <string>

using namespace std;

string sliceString(const string& str) {
  if (str.length() <= 2)
    return "";
  string result = str;
  result.erase(result.begin());
  result.erase(result.end() - 1);
  return result;
}
