/*
7 kyu
Fun with operators
https://www.codewars.com/kata/5813084c6858b6ba7b00006a
*/

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

Person::Person(int age) : m_age(age) {}

bool Person::operator==(const Person& other) const {
  return m_age == other.m_age;
}

bool Person::operator!=(const Person& other) const {
  return !operator==(other);
}

bool Person::operator<=(const Person& other) const {
  return m_age <= other.m_age;
}

bool Person::operator>=(const Person& other) const {
  return m_age >= other.m_age;
}

bool Person::operator<(const Person& other) const {
  return operator<=(other) && operator!=(other);
}

bool Person::operator>(const Person& other) const {
  return operator>=(other) && operator!=(other);
}
