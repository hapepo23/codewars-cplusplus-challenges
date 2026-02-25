/*
5 kyu
The Hashtag Generator
https://www.codewars.com/kata/52449b062fb80683ec000024
*/

#include <iostream>
#include <optional>
#include <string>

using str_t = std::string;
using opt_str_t = std::optional<str_t>;

opt_str_t generate_hashtag(const str_t& str);

static void do_test(const str_t& str, const opt_str_t& expected) {
  opt_str_t actual = generate_hashtag(str);
  std::cout << "String  : \"" << str << "\"" << std::endl
            << "Expected: \"" << expected.value_or("**nullopt**") << "\""
            << std::endl
            << "Actual:   \"" << actual.value_or("**nullopt**") << "\""
            << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test("", std::nullopt);
  do_test(std::string(200, ' '), std::nullopt);
  do_test("Do We have A Hashtag", "#DoWeHaveAHashtag");
  do_test("Codewars", "#Codewars");
  do_test("Codewars Is Nice", "#CodewarsIsNice");
  do_test("CODewars is nice", "#CodewarsIsNice");
  do_test("code" + std::string(149, ' ') + "wars", "#CodeWars");
  do_test(
      "Looooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo"
      "oooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo"
      "oooooooooooong Cat",
      std::nullopt);
  do_test(std::string(139, 'a'), "#A" + std::string(138, 'a'));
  do_test(std::string(140, 'a'), std::nullopt);
  return 0;
}
