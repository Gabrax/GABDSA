#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isIsomorphic(char* s, char* t)
{
  if(strlen(s) != strlen(t)) return false;

  int temp1[256] = {0};
  int temp2[256] = {0};
  
  int len = strlen(s);
  for(int i=0;i<len;++i)
  {
    printf("%d == %d\n",temp1[s[i]],temp2[t[i]]);
    if(temp1[s[i]] != temp2[t[i]]) return false;
    temp1[s[i]] = i + 1;
    temp2[t[i]] = i + 1;
  }
  return true;
}

int main()
{
  printf("%s\n",isIsomorphic("paper", "title") ? "y":"n");

  return 0;
}
