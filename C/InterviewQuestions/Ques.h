#pragma once

#include <stdio.h>

inline void q1()
{
  for(int i=0;i<10;++i) printf("%d ", i);
}

inline void q2()
{
  unsigned int res = 0;
  while(1)
  {
    if(res == 20) break;
    printf("%d ", res+=2);
  }
}

