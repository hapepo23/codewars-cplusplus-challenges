/*
7 kyu
FromPascalToCpp
https://www.codewars.com/kata/5ac3c7ca034a0b3227001ad5
*/

#include <cstdio>

#define begin {
#define end }
#define repeat do {
#define until(a) \
  }              \
  while (!(a))

int fromPascalToCpp(int Sum, int finish, int start);

int main() {
  {
    int Sum = 0, Sum1 = Sum;
    int finish = 10, finish1 = finish;
    int start = 1, start1 = start;
    // Need to work
    begin repeat Sum = Sum + start;
    start = start + 1;
    until(start >= finish);
    end;
    int answer;
    if (Sum == 45)
      answer = 45;
    //////////////////////
    if (fromPascalToCpp(Sum1, finish1, start1) == answer)
      printf("OK\n");
    else
      printf("FAIL\n");
  }
  {
    int Sum = 0, Sum1 = Sum;
    int finish = 10, finish1 = finish;
    int start = 2, start1 = start;
    // Need to work
    begin repeat Sum = Sum + start;
    start = start + 1;
    until(start >= finish);
    end;
    int answer;
    if (Sum == 44)
      answer = 44;
    //////////////////////
    if (fromPascalToCpp(Sum1, finish1, start1) == answer)
      printf("OK\n");
    else
      printf("FAIL\n");
  }
  {
    int Sum = 10, Sum1 = Sum;
    int finish = 100, finish1 = finish;
    int start = 1, start1 = start;
    // Need to work
    begin repeat Sum = Sum + start;
    start = start + 1;
    until(start >= finish);
    end;
    int answer;
    if (Sum == 4960)
      answer = 4960;
    //////////////////////
    if (fromPascalToCpp(Sum1, finish1, start1) == answer)
      printf("OK\n");
    else
      printf("FAIL\n");
  }
  return 0;
}
