/*
6 kyu
Prime Word
https://www.codewars.com/kata/5b1e2c04553292dacd00009e
*/

#include <iostream>
#include <string>
#include <utility>
#include <vector>

std::vector<int> prime_word(
    const std::vector<std::pair<std::string, int>>& list);

template <typename T>
static std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
  os << "{";
  for (size_t i = 0; i < v.size(); ++i) {
    os << v[i];
    if (i + 1 < v.size())
      os << ", ";
  }
  os << "}";
  return os;
}

static void do_test(const std::vector<std::pair<std::string, int>>& list,
                    std::vector<int>& expected) {
  std::vector<int> actual = prime_word(list);
  std::cout << "List: { ";
  for (const auto& i : list)
    std::cout << "{ " << i.first << ", " << i.second << "} ";
  std::cout << "}, expected: " << expected << ", actual: " << actual << " -> "
            << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  std::vector<int> r1 = {1, 1};
  std::vector<int> r2 = {0, 1};
  std::vector<int> r3 = {1, 1};
  do_test({{"Emma", 30}, {"Liam", 30}}, r1);
  do_test({{"Olivia", 20}, {"Noah", 45}}, r2);
  do_test({{"Ava", 75}, {"William", 50}}, r3);
  return 0;
}
