/*
6 kyu
Calculate the area of a regular n sides polygon inside a circle of radius r
https://www.codewars.com/kata/5a58ca28e626c55ae000018a
*/

#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double areaOfPolygonInsideCircle(double circleRadius, int numberOfSides) {
  return std::round((0.5 * numberOfSides * circleRadius * circleRadius *
                     std::sin(2. * M_PI / numberOfSides)) *
                    1.e3) /
         1.e3;
}
