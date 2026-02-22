/*
8 kyu
Remove First and Last Character
https://www.codewars.com/kata/56bc28ad5bdaeb48760009b0
*/

#include <iostream>
#include <string>

using namespace std;

string sliceString(const string& str);

static void do_test(const string& str, const string& expected) {
  string actual = sliceString(str);
  cout << "String  : \"" << str << "\"" << endl
       << "Expected: \"" << expected << "\"" << endl
       << "Actual  : \"" << actual << "\"" << endl
       << "-> " << (expected == actual ? "OK" : "FAIL") << endl
       << endl;
}

int main() {
  do_test("tuna", "un");
  do_test("rats", "at");
  do_test("code", "od");
  do_test("ok", "");
  do_test("country", "ountr");
  do_test("place", "lac");
  do_test("translation", "ranslatio");
  return 0;
}
