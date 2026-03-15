/*
7 kyu
The Office I - Outed
https://www.codewars.com/kata/57ecf6efc7fe13eb070000e1
*/

#include <map>
#include <string>

std::string outed(const std::map<std::string, int>& meet,
                  const std::string& boss) {
  double sum{0};
  double count{0};
  for (auto it = meet.begin(); it != meet.end(); it++) {
    ++count;
    sum += it->second;
    if (it->first == boss)
      sum += it->second;
  }
  double avg = sum / count;
  if (avg <= 5)
    return "Get Out Now!";
  else
    return "Nice Work Champ!";
}
