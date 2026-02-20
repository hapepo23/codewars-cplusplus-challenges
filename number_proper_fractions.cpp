/*
4 kyu
Number of Proper Fractions with Denominator d
https://www.codewars.com/kata/55b7bb74a0256d4467000070
*/

long properFractions(long n) {
  if (n <= 1)
    return 0;
  long num{n};
  long result{n};
  for (long p = 2; p * p <= num; p++) {
    if (num % p == 0) {
      while (num % p == 0) {
        num /= p;
      }
      result -= result / p;
    }
  }
  if (num > 1)
    result -= result / num;
  return result;
}
