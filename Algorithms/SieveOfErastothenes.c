#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// https://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
// Print prime numbers to given limit
void sieveOfEratosthenes(int n)
{
  int* hash = malloc(sizeof(int) * (n+1));
  for (int i = 0; i <= n; ++i) hash[i] = 1;
  hash[0] = 0;
  hash[1] = 0;

  for (int i = 2; i <= sqrtf(n); ++i)
  {
    if (hash[i] == 1)
    {
      for (int j = i * i; j <= n; j += i)
      {
        hash[j] = 0; // Mark multiples of i as non-prime
      }
    }
  }

  printf("Prime numbers up to %d\n",n);
  for (int i = 2; i <= n; ++i) {
      if (hash[i] == 1) printf("%d ",i);
  }
  printf("\n");

  free(hash);
}

int main()
{
  int n = 50;
  sieveOfEratosthenes(n);
  return 0;
}
