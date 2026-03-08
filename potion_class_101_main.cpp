/*
6 kyu
Potion Class 101
https://www.codewars.com/kata/5981ff1daf72e8747d000091
*/

#include <array>
#include <iostream>
#include <sstream>
#include <string>

class Potion {
 public:
  std::array<unsigned char, 3> color;
  unsigned int volume;
  Potion(const std::array<unsigned char, 3>& color, unsigned int volume);
  Potion mix(const Potion& other);
};

std::string color_to_str(const std::array<unsigned char, 3>& color) {
  std::ostringstream os;
  os << "{R: " << (unsigned)color[0] << ", G: " << (unsigned)color[1]
     << ", B: " << (unsigned)color[2] << "}";
  return os.str();
}

int main() {
  std::array<Potion, 6> potions{
      Potion({153, 210, 199}, 32), Potion({135, 34, 0}, 17),
      Potion({18, 19, 20}, 25),    Potion({174, 211, 13}, 4),
      Potion({255, 23, 148}, 19),  Potion({51, 102, 51}, 6)};
  Potion a = potions[0].mix(potions[1]);
  Potion b = potions[0].mix(potions[2]).mix(potions[4]);
  Potion c = potions[1].mix(potions[2]).mix(potions[3]).mix(potions[5]);
  Potion d = potions[0]
                 .mix(potions[1])
                 .mix(potions[2])
                 .mix(potions[4])
                 .mix(potions[5]);
  Potion e = potions[0]
                 .mix(potions[1])
                 .mix(potions[2])
                 .mix(potions[3])
                 .mix(potions[4])
                 .mix(potions[5]);
  if (color_to_str(a.color) == "{R: 147, G: 149, B: 130}" && a.volume == 49)
    std::cout << "a OK" << std::endl;
  if (color_to_str(b.color) == "{R: 135, G: 101, B: 128}" && b.volume == 76)
    std::cout << "b OK" << std::endl;
  if (color_to_str(c.color) == "{R: 74, G: 50, B: 18}" && c.volume == 52)
    std::cout << "c OK" << std::endl;
  if (color_to_str(d.color) == "{R: 130, G: 91, B: 102}" && d.volume == 99)
    std::cout << "d OK" << std::endl;
  if (color_to_str(e.color) == "{R: 132, G: 96, B: 99}" && e.volume == 103)
    std::cout << "e OK" << std::endl;
  return 0;
}
