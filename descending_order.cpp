/*
7 kyu
Descending Order
https://www.codewars.com/kata/5467e4d82edf8bbf40000155
*/

#include <algorithm>
#include <cinttypes>
#include <string>

uint64_t descendingOrder(uint64_t a) {
  std::string s = std::to_string(a);
  std::sort(s.rbegin(), s.rend());
  return std::stoull(s);
}

/*   Pure C version

#include <cinttypes>
#include <cstdio>
#include <cstdlib>
#include <cstring>

int cmp(const void* a, const void* b) {
  return *(char*)b - *(char*)a;
}

uint64_t descendingOrder(uint64_t a) {
  char s[21];
  uint64_t result;
  sprintf(s, "%" PRIu64, a);
  qsort(s, strlen(s), sizeof(char), cmp);
  sscanf(s, "%" PRIu64, &result);
  return result;
}

*/