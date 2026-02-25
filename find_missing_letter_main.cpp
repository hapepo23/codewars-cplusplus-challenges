/*
6 kyu
Find the missing letter
https://www.codewars.com/kata/5839edaa6754d6fec10000a2
*/

#include <iostream>
#include <vector>

char findMissingLetter(const std::vector<char>& chars);

template <typename T>
void cout_vector(const std::vector<T>& v) {
  std::cout << "{ ";
  for (const auto& item : v)
    std::cout << item << " ";
  std::cout << "}" << std::endl;
}

static void do_test(const std::vector<char>& chars, const char expected) {
  char actual = findMissingLetter(chars);
  std::cout << "Array of letters: ";
  cout_vector(chars);
  std::cout << "Expected: \"" << expected << "\", actual: \"" << actual
            << "\" -> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test({'a', 'b', 'c', 'd', 'f'}, 'e');
  do_test({'O', 'Q', 'R', 'S'}, 'P');
  return 0;
}
