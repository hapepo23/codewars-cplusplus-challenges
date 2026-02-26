/*
7 kyu
Drone Fly-By
https://www.codewars.com/kata/58356a94f8358058f30004b5
*/

#include <iostream>
#include <string>

std::string flyBy(const std::string& lamp, const std::string& drone);

static void do_test(const std::string& lamp,
                    const std::string& drone,
                    const std::string& expected) {
  std::string actual = flyBy(lamp, drone);
  std::cout << "Lamp = \"" << lamp << "\", drone = \"" << drone
            << "\", expected: \"" << expected << "\", actual: \"" << actual
            << "\" -> " << (expected == actual ? "OK" : "FAIL") << std::endl;
}

int main() {
  do_test("xxxxxx", "====T", "ooooox");
  do_test("xxxxxxxxx", "==T", "oooxxxxxx");
  do_test("xxxxxxxxxxxxxxx", "=========T", "ooooooooooxxxxx");
  return 0;
}
