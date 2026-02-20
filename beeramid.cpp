/*
5 kyu
Beeramid
https://www.codewars.com/kata/51e04f6b544cf3f6550000c1
*/

int beeramid(int bonus, double price) {
  int result{0};
  double total{0};
  if (bonus <= 0 || price <= 0.)
    return 0;
  while (total <= bonus) {
    result++;
    total += price * result * result;
  }
  return result - 1;
}
