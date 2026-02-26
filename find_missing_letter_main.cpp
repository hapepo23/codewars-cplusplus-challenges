/*
6 kyu
Find the missing letter
https://www.codewars.com/kata/5839edaa6754d6fec10000a2
*/

#include <iostream>
#include <vector>

char findMissingLetter(const std::vector<char>& chars);

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

static void do_test(const std::vector<char>& chars, const char expected) {
  char actual = findMissingLetter(chars);
  std::cout << "Array of letters: " << chars << std::endl
            << "Expected: \"" << expected << "\", actual: \"" << actual
            << "\" -> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test({'a', 'b', 'c', 'd', 'f'}, 'e');
  do_test({'O', 'Q', 'R', 'S'}, 'P');
  return 0;
}
