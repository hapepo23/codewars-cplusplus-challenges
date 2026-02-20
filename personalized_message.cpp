/*
8 kyu
Personalized Message
https://www.codewars.com/kata/5772da22b89313a4d50012f7
*/

#include <string>

std::string greet(const std::string& name, const std::string& owner) {
  return "Hello " + (name == owner ? std::string("boss") : "guest");
}
