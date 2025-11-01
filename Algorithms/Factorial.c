#include <stdio.h>
#include <stdlib.h>

unsigned long long bruteForceFactorial(int n)
{
  if (n < 0) return 0;
  if (n == 0 || n == 1) return 1;

  unsigned long long result = 1;
  for (int i = 2; i <= n; i++) result *= i;
  return result;
}

unsigned long long Memoizationfactorial(unsigned long long* memo, int n)
{
  if (n == 0 || n == 1) return memo[n] = 1;
  if (memo[n] != 0) return memo[n];
  return memo[n] = n * Memoizationfactorial(memo, n - 1);
}

unsigned long long Tabulationfactorial(unsigned long long* tabu, int n)
{
  tabu[0] = 1;
  tabu[1] = 1;
  for (int i = 2; i <= n; i++)
      tabu[i] = i * tabu[i - 1];
  return tabu[n];
}

int main()
{
  unsigned int n = 5;
  unsigned long long factorial = bruteForceFactorial(n);
  printf("%u! = %llu\n", n, factorial);

  unsigned long long* memo = calloc(n + 1, sizeof(unsigned long long));
  printf("Memoization: %llu\n", Memoizationfactorial(memo, n));

  unsigned long long* tabu = calloc(n + 1, sizeof(unsigned long long));
  printf("Tabulation: %llu\n", Tabulationfactorial(tabu, n));

  free(memo);
  free(tabu);

  return 0;
}

