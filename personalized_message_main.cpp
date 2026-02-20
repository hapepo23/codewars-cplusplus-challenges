/*
8 kyu
Personalized Message
https://www.codewars.com/kata/5772da22b89313a4d50012f7
*/

#include <iostream>
#include <string>

std::string greet(const std::string& name, const std::string& owner);

static void do_test(const std::string& name,
                    const std::string& owner,
                    const std::string& expected) {
  std::string actual = greet(name, owner);
  std::cout << "Name: " << name << ", owner: " << owner
            << ", expected: " << expected << ", actual: " << actual << " --> "
            << (expected == actual ? "OK" : "FAIL") << std::endl;
}

int main() {
  do_test("Daniel", "Daniel", "Hello boss");
  do_test("Greg", "Daniel", "Hello guest");
  return 0;
}
