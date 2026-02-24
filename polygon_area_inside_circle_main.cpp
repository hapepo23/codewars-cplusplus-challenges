/*
6 kyu
Calculate the area of a regular n sides polygon inside a circle of radius r
https://www.codewars.com/kata/5a58ca28e626c55ae000018a
*/

#include <iostream>

double areaOfPolygonInsideCircle(double circleRadius, int numberOfSides);

static void do_test(double circleRadius, int numberOfSides, double expected) {
  double actual = areaOfPolygonInsideCircle(circleRadius, numberOfSides);
  std::cout << "Radius         : " << circleRadius << std::endl
            << "Number of Sides: " << numberOfSides << std::endl
            << "Area expected  : " << expected << std::endl
            << "Area actual    : " << actual << std::endl
            << "-> " << (expected == actual ? "OK" : "FAIL") << std::endl
            << std::endl;
}

int main() {
  do_test(3, 3, 11.691);
  do_test(2, 4, 8);
  do_test(4, 5, 38.042);
  do_test(7.5, 3, 73.071);
  do_test(5.8, 7, 92.053);
  do_test(9.7, 9, 272.159);
  return 0;
}
