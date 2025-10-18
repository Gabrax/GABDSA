#pragma once

#include <stdio.h>

static inline void q1()
{
  for(int i=0;i<10;++i) printf("%d ", i);
}
static inline void q2()
{
  unsigned int res = 0;
  while(1)
  {
    if(res == 20) break;
    printf("%d ", res+=2);
  }
}
static inline void q3()
{
  int o = 0;
  for(size_t i=1;i<=100;++i)
  {
    o += i; 
  }
  printf("%d\n",o);
}
static inline void q4(int n) // Fibonacci
{
  int new_v = 0, old = 1, next = 0;
  for(int i=0;i<n;++i)
  {
    printf("%d ", new_v);
    next = new_v + old;
    new_v = old;
    old = next;
  }
}
static inline void q5()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);
  for(int i=0;i<=10;++i)
  {
    printf("%d x %d = %d\n",num,i,num * i);
  } 
}
static inline void q6()
{
  for(size_t i=0;i<5;++i)
  {
    /*printf("Row : %d ",i);*/
    for(size_t j=0;j<=i;++j)
    {
      /*printf("Col : %d ",j);*/
      printf("*");
    }
    printf("\n");
  }
}
static inline int factorial(int n)
{
  if(n == 0) return 1;

  return n * factorial(n-1);
}
static inline void q7()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);

  int res = factorial(num);
  printf("%d\n",res);
}
static inline void isPrime(int val)
{
  int count = 0;
  for(int i=1;i<=val;++i)
  {
    if((val % i) == 0) count++;
  }

  if(count == 2)
  {
    printf("%d ", val);
  }
}
static inline void q8()
{
  int num;
  printf("Enter a number:");
  scanf("%d",&num);

  int count = 0;
  for(int i=1;i<=num;++i)
  {
    if((num % i) == 0) count++;
  }

  if(count == 2)
  {
    printf("%d is a prime number", num);
  }
}
static inline void q9()
{
  for(int i=1;i<=100;++i)
  {
    isPrime(i);
  }
}
static inline void q10()
{
  for(int i=32;i<=126;++i)
  {
    printf("%c ",(char)i);
  }
}
static inline void q11()
{
  int sum = 0;
  for(int i=1;i<=50;++i)
  {
    if(i % 2 == 0) sum += i;
  }
  printf("Sum: %d\n",sum);
}


