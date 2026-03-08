/*
6 kyu
Bouncing Balls
https://www.codewars.com/kata/5544c7a5cb454edb3c000047
*/

class Bouncingball {
 public:
  static int bouncingBall(double h, double bounce, double window);
};

int Bouncingball::bouncingBall(double h, double bounce, double window) {
  if (h <= 0.)
    return -1;
  if (bounce <= 0. || bounce >= 1.)
    return -1;
  if (window <= 0. || window >= h)
    return -1;
  int result{0};
  while (true) {
    h = h * bounce;
    if (h > window)
      result += 2;
    else
      break;
  }
  return result + 1;
}
