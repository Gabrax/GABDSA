#include <limits.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>  

bool isPalindrome(char* s)
{
  size_t left = 0;
  size_t right = strlen(s);
  if (right == 0) return true; 
  right--; 

  while (left < right)
  {
    while (left < right && !isalnum((unsigned char)s[left])) left++;
    while (left < right && !isalnum((unsigned char)s[right])) right--;

    if (left < right)
    {
      if (tolower((unsigned char)s[left]) != tolower((unsigned char)s[right])) return false;
      left++;
      right--;
    }
  }
  return true;
}

int main(void)
{

  char* s = "0P";

  printf("%d\n",isPalindrome(s));

  return 0;
}
