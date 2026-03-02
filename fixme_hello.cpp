/*
6 kyu
FIXME: Hello
https://www.codewars.com/kata/5b0a80ce84a30f4762000069
*/

#include <regex>
#include <string>

class Dinglemouse {
  std::string name;
  int age;
  char sex;
  std::string msg;

 public:
  Dinglemouse();
  Dinglemouse& setAge(int age);
  Dinglemouse& setSex(char sex);
  Dinglemouse& setName(const std::string& name);
  std::string hello();
};

Dinglemouse::Dinglemouse() {
  this->msg = "Hello.";
}

Dinglemouse& Dinglemouse::setAge(int age) {
  this->age = age;
  std::string s = " I am " + std::to_string(age) + ".";
  std::regex re("( I am [0-9]+[.])");
  if (std::regex_search(this->msg, re))
    this->msg = std::regex_replace(this->msg, re, s);
  else
    this->msg += s;
  return *this;
}

Dinglemouse& Dinglemouse::setSex(char sex) {
  this->sex = sex;
  std::string s = " I am ";
  if (sex == 'F')
    s += "fe";
  s += "male.";
  std::regex re("( I am [fe]*male[.])");
  if (std::regex_search(this->msg, re))
    this->msg = std::regex_replace(this->msg, re, s);
  else
    this->msg += s;
  return *this;
}

Dinglemouse& Dinglemouse::setName(const std::string& name) {
  this->name = name;
  std::string s = " My name is " + name + ".";
  std::regex re("( My name is [a-zA-Z]+[.])");
  if (std::regex_search(this->msg, re))
    this->msg = std::regex_replace(this->msg, re, s);
  else
    this->msg += s;
  return *this;
}

std::string Dinglemouse::hello() {
  return msg;
}
