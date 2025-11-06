#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPowerOfTwo(int n) {
  return n > 0 && (n & (n-1)) == 0;
}

int main()
{
  printf("%s\n",isPowerOfTwo(8) ? "y":"n");
}
