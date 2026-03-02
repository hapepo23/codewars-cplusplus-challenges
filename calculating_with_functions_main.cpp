/*
5 kyu
Calculating with Functions
https://www.codewars.com/kata/525f3eda17c7cd9f9e000b39
*/

#include <cstdio>
#include <utility>

int zero();
int one();
int two();
int three();
int four();
int five();
int six();
int seven();
int eight();
int nine();
std::pair<char, int> plus(int x);
std::pair<char, int> minus(int x);
std::pair<char, int> times(int x);
std::pair<char, int> divided_by(int x);
int zero(std::pair<char, int> op_num);
int one(std::pair<char, int> op_num);
int two(std::pair<char, int> op_num);
int three(std::pair<char, int> op_num);
int four(std::pair<char, int> op_num);
int five(std::pair<char, int> op_num);
int six(std::pair<char, int> op_num);
int seven(std::pair<char, int> op_num);
int eight(std::pair<char, int> op_num);
int nine(std::pair<char, int> op_num);

static void do_test(const char* call, int actual, int expected) {
  printf("Call = \"%s\", expected = %d, actual = %d -> %s\n", call, expected,
         actual, expected == actual ? "OK" : "FAIL");
}

int main() {
  do_test("four(plus(nine()))", four(plus(nine())), 13);
  do_test("eight(minus(three()))", eight(minus(three())), 5);
  do_test("seven(times(five()))", seven(times(five())), 35);
  do_test("six(divided_by(two()))", six(divided_by(two())), 3);
  do_test("zero(plus(one()))", zero(plus(one())), 1);
  return 0;
}
