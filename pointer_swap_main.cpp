/*
7 kyu
Pointer Swap
https://www.codewars.com/kata/57f285c069e09ca1aa000b04
*/

#include <cstdio>

void swap(void*& left, void*& right);

int main() {
  void* left = new int[0];
  void* right = new int[0];
  void* oldLeft = left;
  void* oldRight = right;
  swap(left, right);
  printf("%s, %s\n", left == oldRight ? "OK" : "FAIL",
         right == oldLeft ? "OK" : "FAIL");
  return 0;
}
