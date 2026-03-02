/*
5 kyu
Calculating with Functions
https://www.codewars.com/kata/525f3eda17c7cd9f9e000b39
*/

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

static int do_math(int x, char op, int y);

int zero() {
  return 0;
}
int one() {
  return 1;
}
int two() {
  return 2;
}
int three() {
  return 3;
}
int four() {
  return 4;
}
int five() {
  return 5;
}
int six() {
  return 6;
}
int seven() {
  return 7;
}
int eight() {
  return 8;
}
int nine() {
  return 9;
}

std::pair<char, int> plus(int x) {
  return {'+', x};
}
std::pair<char, int> minus(int x) {
  return {'-', x};
}
std::pair<char, int> times(int x) {
  return {'*', x};
}
std::pair<char, int> divided_by(int x) {
  return {'/', x};
}

int zero(std::pair<char, int> op_num) {
  return do_math(0, op_num.first, op_num.second);
}

int one(std::pair<char, int> op_num) {
  return do_math(1, op_num.first, op_num.second);
}

int two(std::pair<char, int> op_num) {
  return do_math(2, op_num.first, op_num.second);
}

int three(std::pair<char, int> op_num) {
  return do_math(3, op_num.first, op_num.second);
}

int four(std::pair<char, int> op_num) {
  return do_math(4, op_num.first, op_num.second);
}

int five(std::pair<char, int> op_num) {
  return do_math(5, op_num.first, op_num.second);
}

int six(std::pair<char, int> op_num) {
  return do_math(6, op_num.first, op_num.second);
}

int seven(std::pair<char, int> op_num) {
  return do_math(7, op_num.first, op_num.second);
}

int eight(std::pair<char, int> op_num) {
  return do_math(8, op_num.first, op_num.second);
}

int nine(std::pair<char, int> op_num) {
  return do_math(9, op_num.first, op_num.second);
}

static int do_math(int x, char op, int y) {
  switch (op) {
    case '+':
      return x + y;
      break;
    case '-':
      return x - y;
      break;
    case '*':
      return x * y;
      break;
    default:
      return x / y;
      break;
  }
}
