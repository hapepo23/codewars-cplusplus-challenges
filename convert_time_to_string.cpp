/*
7 kyu
Convert Time to String
https://www.codewars.com/kata/5502ddd734137e90af000f62
*/

#include <sstream>
#include <string>

std::string convertTime(int timeDiff) {
  int d = timeDiff / 86400;
  timeDiff = timeDiff % 86400;
  int h = timeDiff / 3600;
  timeDiff = timeDiff % 3600;
  int m = timeDiff / 60;
  int s = timeDiff % 60;
  std::ostringstream os;
  os << d << " " << h << " " << m << " " << s;
  return os.str();
}
