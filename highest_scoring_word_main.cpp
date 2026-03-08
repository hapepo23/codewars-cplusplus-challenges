/*
6 kyu
Highest Scoring Word
https://www.codewars.com/kata/57eb8fcdf670e99d9b000272
*/

#include <iostream>
#include <string>

using std::cout, std::endl, std::string;

string highestScoringWord(const string& str);

static void do_test(const string& str, const string& expected) {
  string actual = highestScoringWord(str);
  cout << "Words   : " << str << endl
       << "Expected: " << expected << endl
       << "Actual  : " << actual << endl
       << "-> " << (expected == actual ? "OK" : "FAIL") << endl
       << endl;
}

int main() {
  do_test("man i need a taxi up to ubud", "taxi");
  do_test("what time are we climbing up the volcano", "volcano");
  do_test("take me to semynak", "semynak");
  do_test("massage yes massage yes massage", "massage");
  do_test("take two bintang and a dance please", "bintang");
  do_test("aa b", "aa");
  return 0;
}
