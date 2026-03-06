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

static void do_test(const std::string& alphabet,
                    const std::string& key,
                    const std::string& operation,
                    const std::string& string,
                    const std::string& actual,
                    const std::string& expected) {
  std::cout << "Alphabet : " << alphabet << std::endl;
  std::cout << "Key      : " << key << std::endl;
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
  c.key = "password";
  do_test(c.alphabet, c.key, "encode", "codewars", c.encode("codewars"),
          "rovwsoiv");
  do_test(c.alphabet, c.key, "decode", "rovwsoiv", c.decode("rovwsoiv"),
          "codewars");
  do_test(c.alphabet, c.key, "encode", "waffles", c.encode("waffles"),
          "laxxhsj");
  do_test(c.alphabet, c.key, "decode", "laxxhsj", c.decode("laxxhsj"),
          "waffles");
  do_test(c.alphabet, c.key, "encode", "it's a shift cipher!",
          c.encode("it's a shift cipher!"), "xt'k o vwixl qzswej!");
  do_test(c.alphabet, c.key, "decode", "xt'k o vwixl qzswej!",
          c.decode("xt'k o vwixl qzswej!"), "it's a shift cipher!");
  c.alphabet =
      "アイウエオァィゥェォカキクケコサシスセソタチツッテトナニヌネノハヒフヘホ"
      "マミムメモヤャユュヨョラリルレロワヲンー";
  c.key = "カタカナ";
  do_test(c.alphabet, c.key, "encode", "ドモアリガトゴザイマス",
          c.encode("ドモアリガトゴザイマス"), "ドオカセガヨゴザキアニ");
  do_test(c.alphabet, c.key, "decode", "ドオカセガヨゴザキアニ",
          c.decode("ドオカセガヨゴザキアニ"), "ドモアリガトゴザイマス");
  return 0;
}
