/*
7 kyu
Drone Fly-By
https://www.codewars.com/kata/58356a94f8358058f30004b5
*/

#include <string>

std::string flyBy(const std::string& lamp, const std::string& drone) {
  auto result{lamp};
  auto pos = drone.size();
  result.replace(0, pos, pos, 'o');
  return result;
}
