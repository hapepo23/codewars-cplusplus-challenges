/*
6 kyu
Make the Deadfish Swim
https://www.codewars.com/kata/51e0007c1f9378fa810002a9
*/

#include <iostream>
#include <string_view>
#include <vector>

std::vector<int> parse(std::string_view data);

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
  os << "{";
  for (size_t i = 0; i < v.size(); ++i) {
    os << v[i];
    if (i + 1 < v.size())
      os << ", ";
  }
  os << "}";
  return os;
}

static void do_test(const std::string_view& data,
                    const std::vector<int>& expected) {
  std::vector<int> actual = parse(data);
  std::cout << "Data    : " << data << std::endl;
  std::cout << "Expected: " << expected << std::endl;
  std::cout << "Actual  : " << actual << std::endl;
  std::cout << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test("iiisdoso", {8, 64});
  do_test("iiisxxxdoso", {8, 64});
  return 0;
}
