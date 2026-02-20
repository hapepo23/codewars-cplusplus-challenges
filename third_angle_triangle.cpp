/*
8 kyu
Third Angle of a Triangle
https://www.codewars.com/kata/5a023c426975981341000014
*/

class Triangle {
 public:
  static int otherAngle(int a, int b);
};

int Triangle::otherAngle(int a, int b) {
  return 180 - a - b;
}
