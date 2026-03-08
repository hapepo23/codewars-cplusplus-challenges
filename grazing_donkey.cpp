/*
4 kyu
Grazing Donkey
https://www.codewars.com/kata/5b5ce2176d0db7331f0000c0
*/

#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

double intersection_area(double r1, double r2) {
  double dist, alpha, beta, a1, a2;
  double result;
  dist = r1;  // Center of circle 2 on the perimeter of circle 1
  if (dist > r1 + r2)
    result = 0;
  else if (dist <= (r1 - r2) && r1 >= r2)
    result = M_PI * r2 * r2;
  else if (dist <= (r2 - r1) && r2 >= r1)
    result = M_PI * r1 * r1;
  else {
    alpha = std::acos((r1 * r1 + dist * dist - r2 * r2) / (2 * r1 * dist)) * 2;
    beta = std::acos((r2 * r2 + dist * dist - r1 * r1) / (2 * r2 * dist)) * 2;
    a1 = 0.5 * beta * r2 * r2 - 0.5 * r2 * r2 * std::sin(beta);
    a2 = 0.5 * alpha * r1 * r1 - 0.5 * r1 * r1 * std::sin(alpha);
    result = a1 + a2;
  }
  return result;
}

int getRopeLength(int fieldDiameter, double eatenRatio) {
  if (fieldDiameter <= 0)
    return 0;
  if (eatenRatio <= 0.)
    return 0;
  if (eatenRatio >= 1.)
    return fieldDiameter;
  double r1 = (double)fieldDiameter / 2.;
  double a1 = r1 * r1 * M_PI;
  double is = a1 * eatenRatio;
  // x = r2 (RopeLength)
  // y = intersection_area(r1, x) - is
  // Regula Falsi Method ...
  double x1 = 0.;
  double y1 = -is;
  double x2 = 2. * r1;
  double y2 = intersection_area(r1, x2) - is;
  double xtry;
  double ytry;
  while (true) {
    xtry = (x1 * y2 - x2 * y1) / (y2 - y1);
    ytry = intersection_area(r1, xtry) - is;
    if (std::fabs((xtry - x1) / x1) < 0.01 ||
        std::fabs((xtry - x2) / x2) < 0.01)
      break;
    if (y1 * ytry > 0) {
      x1 = xtry;
      y1 = ytry;
    } else if (y2 * ytry > 0) {
      x2 = xtry;
      y2 = ytry;
    }
  }
  int rl = (int)xtry;
  // Fine Tuning
  if (intersection_area(r1, (double)rl) / a1 > eatenRatio) {
    while (intersection_area(r1, (double)rl) / a1 > eatenRatio) {
      --rl;
    }
  } else {
    while (intersection_area(r1, (double)rl) / a1 <= eatenRatio) {
      ++rl;
    }
    --rl;
  }
  return rl;
}
