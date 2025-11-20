#include <stdio.h>
#include <stdlib.h>

unsigned long long Fibonacci(int n)
{
  if (n <= 0) return 0;
  if (n == 1) return 1;
  return Fibonacci(n - 1) + Fibonacci(n - 2);
}

unsigned long long MemoizationFibonacci(unsigned long long* memo, int n)
{
  if (n <= 0) return memo[n] = 0;
  if (n == 1) return memo[n] = 1;
  if (memo[n] != 0) return memo[n];
  return memo[n] = MemoizationFibonacci(memo, n - 1) + MemoizationFibonacci(memo, n - 2);
}

unsigned long long TabulationFibonacci(unsigned long long* tab, int n)
{
  if (n <= 0) return 0;
  tab[0] = 0;
  if (n >= 1) tab[1] = 1;

  for (int i = 2; i <= n; i++)
  {
    tab[i] = tab[i - 1] + tab[i - 2];
  }

  return tab[n];
}

unsigned long long IterativeFibonacci(int n)
{
  unsigned long long a=0,b=1,c=0;

  size_t i;
  for(i=2;i<=n;++i)
  {
    c = a + b;
    a = b;
    b = c;
  }
  return b;
}

int main()
{
  unsigned int n = 40;
  printf("Fibonacci(%u) (rekurencyjnie) = %llu\n", n, Fibonacci(n));

  unsigned long long* memo = calloc(n + 1, sizeof(unsigned long long));
  printf("Memoization: %llu\n", MemoizationFibonacci(memo, n));
  free(memo);

  unsigned long long* tab = calloc(n + 1, sizeof(unsigned long long));
  printf("Tabulation: %llu\n", TabulationFibonacci(tab, n));
  free(tab);

  printf("Iterative: %llu\n", IterativeFibonacci(n));

  return 0;
}
