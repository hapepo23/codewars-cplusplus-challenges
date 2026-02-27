/*
5 kyu
Build a quadratic equation
https://www.codewars.com/kata/60a9148187cfaf002562ceb8
*/

#include <cctype>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

static const bool DEBUG = false;

std::string build_result(const int i,
                         const int koeff,
                         const char varchar,
                         bool prevempty) {
  std::string result{""};
  bool plus = (i < 2);
  int abskoeff = abs(koeff);
  char vc[2] = {varchar, '\0'};
  if (koeff != 0) {
    if (abskoeff != 1) {
      if (koeff > 0 && plus && (!prevempty))
        result += "+";
      result += std::to_string(koeff);
    } else {
      if (koeff < 0)
        result += "-";
      else if (plus && (!prevempty)) {
        result += "+";
      }
      if (i == 0)
        result += "1";
    }
    result += (i > 0 ? vc : "");
    result += (i > 1 ? "^2" : "");
  }
  return result;
}

std::string quadratic_builder(const std::string& expression) {
  size_t l = expression.size();
  char buf[l + 1];
  strncpy(buf, expression.c_str(), l);
  char varchar = ' ';
  char* p = buf;
  while (*p != '\0' && varchar == ' ') {
    if (isalpha(*p))
      varchar = *p;
    p++;
  }
  if (varchar == ' ')
    return "Variable character not found";
  if (DEBUG)
    printf("DEBUG varchar:\"%c\"\n", varchar);
  p = strstr(buf, ")(");
  if (p == NULL)
    return "')(' not found";
  char* parts[2] = {buf + 1, p + 2};
  *p = '\0';
  buf[l - 1] = '\0';
  if (DEBUG)
    printf("DEBUG part1:\"%s\", part2:\"%s\"\n", parts[0], parts[1]);
  int nums[2][2] = {0};
  for (int i = 0; i < 2; i++) {
    p = strchr(parts[i], varchar);
    if (p == NULL)
      return "Split at variable char not possible";
    *p = '\0';
    if (strcmp(parts[i], "-") == 0)
      nums[i][0] = -1;
    else if (strlen(parts[i]) == 0)
      nums[i][0] = 1;
    else
      nums[i][0] = atoi(parts[i]);
    nums[i][1] = atoi(p + 1);
  }
  if (DEBUG)
    printf("DEBUG nums: %d %d %d %d\n", nums[0][0], nums[0][1], nums[1][0],
           nums[1][1]);
  int koeff[3];
  koeff[2] = nums[0][0] * nums[1][0];
  koeff[1] = nums[0][0] * nums[1][1] + nums[0][1] * nums[1][0];
  koeff[0] = nums[0][1] * nums[1][1];
  if (DEBUG)
    printf("DEBUG equation: %d%c^2%s%d%c%s%d\n", koeff[2], varchar,
           koeff[1] < 0 ? "-" : "+", abs(koeff[1]), varchar,
           koeff[0] < 0 ? "-" : "+", abs(koeff[0]));
  std::string result{""};
  for (int i = 2; i >= 0; --i)
    result += build_result(i, koeff[i], varchar, result.size() == 0);
  return result;
}
