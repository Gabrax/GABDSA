#include <stdio.h>

unsigned long long Factorial(int n)
{
  if (n < 0) return 0;
  if (n == 0 || n == 1) return 1;

  unsigned long long result = 1;
  for (int i = 2; i <= n; i++) result *= i;
  return result;
}

unsigned long long RecFactorial(int n)
{
  if (n == 0 || n == 1) return 1;
  return n * RecFactorial(n - 1);
}

int main()
{
  unsigned int n = 5;
  unsigned long long factorial = Factorial(n);
  printf("%u! = %llu\n", n, factorial);

  factorial = RecFactorial(n);
  printf("%u! = %llu\n", n, factorial);

  return 0;
}

