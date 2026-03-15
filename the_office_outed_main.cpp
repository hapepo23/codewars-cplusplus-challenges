/*
7 kyu
The Office I - Outed
https://www.codewars.com/kata/57ecf6efc7fe13eb070000e1
*/

#include <cstdio>
#include <map>
#include <string>

std::string outed(const std::map<std::string, int>& meet,
                  const std::string& boss);

static void do_test(const std::string& actual, const std::string& expected) {
  printf("Expected: %s, actual: %s --> %s\n", expected.c_str(), actual.c_str(),
         expected == actual ? "OK" : "FAIL");
}

int main() {
  do_test(outed({{"tim", 0},
                 {"jim", 2},
                 {"randy", 0},
                 {"sandy", 7},
                 {"andy", 0},
                 {"katie", 5},
                 {"laura", 1},
                 {"saajid", 2},
                 {"alex", 3},
                 {"john", 2},
                 {"mr", 0}},
                "laura"),
          "Get Out Now!");
  do_test(outed({{"tim", 1},
                 {"jim", 3},
                 {"randy", 9},
                 {"sandy", 6},
                 {"andy", 7},
                 {"katie", 6},
                 {"laura", 9},
                 {"saajid", 9},
                 {"alex", 9},
                 {"john", 9},
                 {"mr", 8}},
                "katie"),
          "Nice Work Champ!");
  do_test(outed({{"tim", 2},
                 {"jim", 4},
                 {"randy", 0},
                 {"sandy", 5},
                 {"andy", 8},
                 {"katie", 6},
                 {"laura", 2},
                 {"saajid", 2},
                 {"alex", 3},
                 {"john", 2},
                 {"mr", 8}},
                "john"),
          "Get Out Now!");
  return 0;
}
