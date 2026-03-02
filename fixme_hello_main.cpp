/*
6 kyu
FIXME: Hello
https://www.codewars.com/kata/5b0a80ce84a30f4762000069
*/

#include <iostream>
#include <string>

class Dinglemouse {
  std::string name;
  int age;
  char sex;
  std::string msg;

 public:
  Dinglemouse();
  Dinglemouse& setAge(int age);
  Dinglemouse& setSex(char sex);
  Dinglemouse& setName(const std::string& name);
  std::string hello();
};

static void doTest(const std::string& expected, const std::string& actual) {
  std::cout << "Expected string; \"" << expected << "\"" << std::endl
            << "Actual string  : \"" << actual << "\"" << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  {
    Dinglemouse dm;
    std::string expected = "Hello.";
    doTest(expected, dm.hello());
  }
  {
    Dinglemouse dm;
    dm.setName("Bob").setAge(27).setSex('M');
    std::string expected = "Hello. My name is Bob. I am 27. I am male.";
    doTest(expected, dm.hello());
  }
  {
    Dinglemouse dm;
    dm.setAge(27).setSex('M').setName("Bob");
    std::string expected = "Hello. I am 27. I am male. My name is Bob.";
    doTest(expected, dm.hello());
  }
  {
    Dinglemouse dm;
    dm.setName("Alice").setSex('M').setSex('F');
    std::string expected = "Hello. My name is Alice. I am female.";
    doTest(expected, dm.hello());
  }
  {
    Dinglemouse dm;
    dm.setName("Batman").setName("Catwoman");
    std::string expected = "Hello. My name is Catwoman.";
    doTest(expected, dm.hello());
  }
  {
    Dinglemouse dm;
    dm.setName("Batman");
    std::string expected = "Hello. My name is Batman.";
    doTest(expected, dm.hello());
  }
  {
    Dinglemouse dm;
    dm.setAge(27).setAge(28).setAge(29);
    std::string expected = "Hello. I am 29.";
    doTest(expected, dm.hello());
  }
  {
    Dinglemouse dm;
    dm.setSex('F').setSex('M').setAge(27).setAge(52).setName("Rick").setName(
        "Dick");
    std::string expected = "Hello. I am male. I am 52. My name is Dick.";
    doTest(expected, dm.hello());
  }
  {
    Dinglemouse dm;
    dm.setAge(52).setSex('F').setName("Dick").setSex('M');
    std::string expected = "Hello. I am 52. I am male. My name is Dick.";
    doTest(expected, dm.hello());
  }
  return 0;
}
