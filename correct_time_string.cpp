/*
7 kyu
Correct the time-string
https://www.codewars.com/kata/57873ab5e55533a2890000c7
*/

#include <iomanip>
#include <sstream>
#include <string>

std::string correct(const std::string& timeString) {
  if (timeString.size() != 8 || timeString[2] != ':' || timeString[5] != ':')
    return "";
  for (int i : {0, 1, 3, 4, 6, 7})
    if (timeString[i] < '0' || timeString[i] > '9')
      return "";
  int x = (timeString[0] - '0') * 10 + (timeString[1] - '0');
  int y = (timeString[3] - '0') * 10 + (timeString[4] - '0');
  int z = (timeString[6] - '0') * 10 + (timeString[7] - '0');
  y += z / 60;
  z %= 60;
  x += y / 60;
  y %= 60;
  x %= 24;
  std::ostringstream oss;
  oss << std::setw(2) << std::setfill('0') << x << ":" << std::setw(2)
      << std::setfill('0') << y << ":" << std::setw(2) << std::setfill('0')
      << z;
  return oss.str();
}
