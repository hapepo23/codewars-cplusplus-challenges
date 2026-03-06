/*
4 kyu
Vigenère Cipher Helper
https://www.codewars.com/kata/52d1bd3694d26f8d6e0000d3
*/

#include <iostream>
#include <string>

class VigenèreCipher {
 public:
  std::string key;
  std::string alphabet;
  std::string encode(const std::string& str);
  std::string decode(const std::string& str);
};

static void do_test(VigenèreCipher& c,
                    const std::string& operation,
                    const std::string& string,
                    const std::string& expected) {
  std::string actual;
  if (operation == "encode")
    actual = c.encode(string);
  else
    actual = c.decode(string);
  std::cout << "Alphabet : " << c.alphabet << std::endl;
  std::cout << "Key      : " << c.key << std::endl;
  std::cout << "Operation: " << operation << std::endl;
  std::cout << "Input    : " << string << std::endl;
  std::cout << "Expected : " << expected << std::endl;
  std::cout << "Actual   : " << actual << std::endl;
  std::cout << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  VigenèreCipher c;
  c.alphabet = "abcdefghijklmnopqrstuvwxyz";
  c.key = "abcdwxyz";
  do_test(c, "encode", "abcdefgh", "acegaceg");
  do_test(c, "decode", "acegaceg", "abcdefgh");
  c.key = "password";
  do_test(c, "encode", "codewars", "rovwsoiv");
  do_test(c, "decode", "rovwsoiv", "codewars");
  do_test(c, "encode", "waffles", "laxxhsj");
  do_test(c, "decode", "laxxhsj", "waffles");
  do_test(c, "encode", "it's a shift cipher!", "xt'k o vwixl qzswej!");
  do_test(c, "decode", "xt'k o vwixl qzswej!", "it's a shift cipher!");
  c.alphabet =
      "アイウエオァィゥェォカキクケコサシスセソタチツッテトナニヌネノハヒフヘホ"
      "マミムメモヤャユュヨョラリルレロワヲンー";
  c.key = "カタカナ";
  do_test(c, "encode", "ドモアリガトゴザイマス", "ドオカセガヨゴザキアニ");
  do_test(c, "decode", "ドオカセガヨゴザキアニ", "ドモアリガトゴザイマス");
  return 0;
}
