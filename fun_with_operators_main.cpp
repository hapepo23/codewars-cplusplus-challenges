/*
7 kyu
Fun with operators
https://www.codewars.com/kata/5813084c6858b6ba7b00006a
*/

#include <cstdio>

class Person {
 public:
  Person(int age);
  bool operator==(const Person& other) const;
  bool operator!=(const Person& other) const;
  bool operator<=(const Person& other) const;
  bool operator>=(const Person& other) const;
  bool operator<(const Person& other) const;
  bool operator>(const Person& other) const;

 private:
  const int m_age;
};

int main() {
  {
    Person p1(17);
    Person p2(17);
    printf("%s\n", (p1 == p2) == true ? "OK" : "FAIL");
    printf("%s\n", (p1 != p2) == false ? "OK" : "FAIL");
    printf("%s\n", (p1 <= p2) == true ? "OK" : "FAIL");
    printf("%s\n", (p1 >= p2) == true ? "OK" : "FAIL");
    printf("%s\n", (p1 < p2) == false ? "OK" : "FAIL");
    printf("%s\n", (p1 > p2) == false ? "OK" : "FAIL");
  }
  {
    Person p1(10);
    Person p2(10);
    Person p3(100);
    printf("%s\n", (p1 <= p2) == true ? "OK" : "FAIL");
    printf("%s\n", (p1 == p2) == true ? "OK" : "FAIL");
    printf("%s\n", (p1 != p2) == false ? "OK" : "FAIL");
    printf("%s\n", (p2 <= p1) == true ? "OK" : "FAIL");
    printf("%s\n", (p1 <= p3) == true ? "OK" : "FAIL");
    printf("%s\n", (p1 > p3) == false ? "OK" : "FAIL");
    printf("%s\n", (p1 >= p3) == false ? "OK" : "FAIL");
  }
  return 0;
}
