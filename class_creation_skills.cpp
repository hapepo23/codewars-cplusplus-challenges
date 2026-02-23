/*
6 kyu
Train your skills in creation of classes
https://www.codewars.com/kata/5ab4f002379d20e82500008c
*/

#include <iostream>
#include <sstream>
#include <string>

class X {
  int m_a = 1;
  int m_b = 2;

 public:
  // Constructors
  X() = default;
  explicit X(int a);
  X(int a, int b);

  // Arithmetic operators
  X& operator+=(const X& x);
  X operator+(const X& x) const;

  // Increment operators
  X& operator++();    // prefix
  X operator++(int);  // postfix

  // String output
  std::string print() const;
};

std::ostream& operator<<(std::ostream& os, const X& x);

X::X(int a) : m_a(a) {}

X::X(int a, int b) : m_a(a), m_b(b) {}

X& X::operator+=(const X& x) {
  m_a += x.m_a;
  m_b += x.m_b;
  return *this;
}

X X::operator+(const X& x) const {
  X tmp = *this;
  tmp += x;
  return tmp;
}

X& X::operator++() {
  ++m_a;
  ++m_b;
  return *this;
}

X X::operator++(int) {
  X tmp = *this;
  ++(*this);
  return tmp;
}

std::string X::print() const {
  std::ostringstream s;
  s << "[" << m_a << "," << m_b << "]";
  return s.str();
}

std::ostream& operator<<(std::ostream& os, const X& x) {
  return os << x.print();
}