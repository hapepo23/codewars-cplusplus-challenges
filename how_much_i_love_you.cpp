/*
8 kyu
I love you, a little , a lot, passionately ... not at all
https://www.codewars.com/kata/57f24e6a18e9fad8eb000296
*/

#include <array>
#include <string>
#include <string_view>

std::string how_much_i_love_you(int nb_petals) {
  static constexpr std::array<std::string_view, 6> texts = {
      "I love you", "a little", "a lot", "passionately", "madly", "not at all"};
  return std::string(texts[(nb_petals - 1) % texts.size()]);
}
