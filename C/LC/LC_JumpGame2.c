#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int jump(int* nums, int numsSize)
{
  int res = 0, ptr1 = 0, ptr2 = 0, far = 0;

  while(ptr2 < numsSize-1) 
  {
    far = 0;
    for(int i=ptr1;i <= ptr2;++i)
    {
     far = fmax(far,i+nums[i]); 
    }
    ptr1 = ptr2+1;
    ptr2 = far;
    ++res;
  }

  return res;
}

int main()
{
  /*int arr[] = {2,3,1,1,4};*/
  int arr[] = {2,3,1};
  int len = sizeof arr / sizeof arr[0];

  printf("%d\n",jump(arr,len));

  return 0;
}
