/*
3 kyu
The Lift
https://www.codewars.com/kata/58905bfa1decb981da00009e
*/

#include <iostream>
#include <vector>

using VI = std::vector<int>;
using VVI = std::vector<std::vector<int>>;

VI the_lift(const VVI& queues, int capacity);

template <typename T>
static std::ostream& operator<<(std::ostream& os,
                                const std::vector<std::vector<T>>& m) {
  os << "{";
  for (size_t i = 0; i < m.size(); ++i) {
    os << "{";
    for (size_t j = 0; j < m[i].size(); ++j) {
      os << m[i][j];
      if (j + 1 < m[i].size())
        os << ", ";
    }
    os << "}";
    if (i + 1 < m.size())
      os << ", ";
  }
  os << "}";
  return os;
}

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

static void do_test(const VVI& queues, const int capacity, const VI& expected) {
  VI actual = the_lift(queues, capacity);
  std::cout << "Queues Matrix: " << queues << std::endl
            << "Capacity     : " << capacity << std::endl
            << "Expected     : " << expected << std::endl
            << "Actual       : " << actual << std::endl
            << "-> " << (actual == expected ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  VVI queues;
  VI result;
  queues = {{}, {}, {5, 5, 5}, {}, {}, {}, {}};
  result = {0, 2, 5, 0};
  do_test(queues, 5, result);
  queues = {{}, {}, {1, 1}, {}, {}, {}, {}};
  result = {0, 2, 1, 0};
  do_test(queues, 5, result);
  queues = {{}, {3}, {4}, {}, {5}, {}, {}};
  result = {0, 1, 2, 3, 4, 5, 0};
  do_test(queues, 5, result);
  queues = {{}, {0}, {}, {}, {2}, {3}, {}};
  result = {0, 5, 4, 3, 2, 1, 0};
  do_test(queues, 5, result);
  queues = {{3}, {2}, {0}, {2}, {}, {}, {5}};
  result = {0, 1, 2, 3, 6, 5, 3, 2, 0};
  do_test(queues, 5, result);
  queues = {{}, {}, {4, 4, 4, 4}, {}, {2, 2, 2, 2}, {}, {}};
  result = {0, 2, 4, 2, 4, 2, 0};
  do_test(queues, 2, result);
  queues = {{1, 2, 3, 4}, {}, {}, {}, {}, {}, {}};
  result = {0, 1, 2, 3, 4, 0};
  do_test(queues, 5, result);
  queues = {{3, 3, 3, 3, 3, 3}, {}, {}, {}, {}, {}, {}};
  result = {0, 3, 0, 3, 0};
  do_test(queues, 5, result);
  queues = {{}, {}, {}, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, {}, {}, {}};
  result = {0, 3, 1, 3, 1, 3, 1, 0};
  do_test(queues, 5, result);
  queues = {{3, 3, 3, 3, 3, 3}, {}, {}, {}, {}, {4, 4, 4, 4, 4, 4}, {}};
  result = {0, 3, 5, 4, 0, 3, 5, 4, 0};
  do_test(queues, 5, result);
  queues = {{}, {0, 0, 0, 6}, {}, {}, {}, {6, 6, 0, 0, 0, 6}, {}};
  result = {0, 1, 5, 6, 5, 1, 0, 1, 0};
  do_test(queues, 5, result);
  queues = {{}, {2}, {3, 3, 3}, {1}, {}, {}, {}};
  result = {0, 1, 2, 3, 1, 2, 3, 2, 3, 0};
  do_test(queues, 1, result);
  queues = {{},           {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0},
            {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};
  result = {0, 6, 5, 4, 3, 2, 1, 0, 5, 4, 3, 2, 1,
            0, 4, 3, 2, 1, 0, 3, 2, 1, 0, 1, 0};
  do_test(queues, 5, result);
  queues = {{}, {}, {}, {}, {}, {}, {}};
  result = {0};
  do_test(queues, 5, result);
  return 0;
}
