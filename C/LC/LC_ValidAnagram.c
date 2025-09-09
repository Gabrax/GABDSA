#include <limits.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isAnagram(const char* s, const char* t)
{
  size_t len_s = strlen(s);
  size_t len_t = strlen(t);

  if (len_s != len_t) return false;

  int table[256] = {0};

  for (size_t i = 0; i < len_s; i++) {
      unsigned char c = (unsigned char)s[i];
      table[c]++;
  }

  for (size_t i = 0; i < len_t; i++) {
      unsigned char c = (unsigned char)t[i];
      table[c]--;
      if (table[c] < 0) return false;
  }

  return true;
}

int main()
{

  printf("%d\n",isAnagram("car", "car"));

}
