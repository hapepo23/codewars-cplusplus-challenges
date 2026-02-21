/*
7 kyu
You're a square!
https://www.codewars.com/kata/54c27a33fb7da0db0100040e
*/

bool is_square(int n) {
  if (n < 0)
    return false;
  if (n <= 1)
    return true;
  int left = 1;
  int right = n;
  while (left <= right) {
    int mid = left + (right - left) / 2;
    int square = mid * mid;
    if (square == n)
      return true;
    else if (square < n)
      left = mid + 1;
    else
      right = mid - 1;
  }
  return false;
}
