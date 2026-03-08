/*
6 kyu
Potion Class 101
https://www.codewars.com/kata/5981ff1daf72e8747d000091
*/

#include <array>
#include <cmath>
#include <iostream>

class Potion {
 public:
  std::array<unsigned char, 3> color;
  unsigned int volume;
  Potion(const std::array<unsigned char, 3>& color, unsigned int volume);
  Potion mix(const Potion& other);
};

Potion::Potion(const std::array<unsigned char, 3>& color, unsigned int volume) {
  this->color[0] = color[0];
  this->color[1] = color[1];
  this->color[2] = color[2];
  this->volume = volume;
}

Potion Potion::mix(const Potion& other) {
  unsigned char xx[3];
  for (int i = 0; i < 3; i++) {
    double x = std::ceil(((double)this->color[i] * (double)this->volume +
                          (double)other.color[i] * (double)other.volume) /
                         ((double)this->volume + (double)other.volume));
    xx[i] = (unsigned char)x;
  }
  return Potion({xx[0], xx[1], xx[2]}, this->volume + other.volume);
}
