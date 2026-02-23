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

static void log(const std::string& str) {
  std::cout << "Test case: " << str << std::endl;
}

static void do_test(const std::string& actual, const std::string& expected) {
  std::cout << "Expected: \"" << expected << "\"" << std::endl
            << "Actual  : \"" << actual << "\"" << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  {
    X x{};
    log("X x{};");
    do_test(x.print(), "[1,2]");
  }
  {
    X x{3, 4};
    log("X x{3,4};");
    do_test(x.print(), "[3,4]");
  }
  {
    X x{3};
    log("X x{3};");
    do_test(x.print(), "[3,2]");
  }
  {
    X x{}, y{x};
    log("X x{}, y{x};");
    do_test(y.print(), "[1,2]");
  }
  {
    X y{X{22, 33}};
    log("X y{X(22,33)};");
    do_test(y.print(), "[22,33]");
  }
  {
    X x{}, y{};
    y = x;
    log("X x{}, y{}; y = x;");
    do_test(y.print(), "[1,2]");
  }
  {
    X x{}, y{};
    y += x;
    log("X x{}, y{}; y += x;");
    do_test(y.print(), "[2,4]");
  }
  {
    X x{};
    ++x;
    log("X x{}; ++x;");
    do_test(x.print(), "[2,3]");
  }
  {
    X x{2};
    ++x;
    log("X x{2}; ++x;");
    do_test(x.print(), "[3,3]");
  }
  {
    X x{2, 3}, y = x++;
    log("X x{2,3}, y = x++;");
    do_test(y.print(), "[2,3]");
    do_test(x.print(), "[3,4]");
  }
  return 0;
}
