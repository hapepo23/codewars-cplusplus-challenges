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
    do {
      Sum = Sum + start;
      start = start + 1;
    } while (start < finish);
    if (fromPascalToCpp(Sum1, finish1, start1) == Sum)
      printf("OK\n");
    else
      printf("FAIL\n");
  }
  {
    int Sum = 0, Sum1 = Sum;
    int finish = 10, finish1 = finish;
    int start = 2, start1 = start;
    do {
      Sum = Sum + start;
      start = start + 1;
    } while (start < finish);
    if (fromPascalToCpp(Sum1, finish1, start1) == Sum)
      printf("OK\n");
    else
      printf("FAIL\n");
  }
  {
    int Sum = 10, Sum1 = Sum;
    int finish = 100, finish1 = finish;
    int start = 1, start1 = start;
    do {
      Sum = Sum + start;
      start = start + 1;
    } while (start < finish);
    if (fromPascalToCpp(Sum1, finish1, start1) == Sum)
      printf("OK\n");
    else
      printf("FAIL\n");
  }
  return 0;
}
