#include <limits.h>
#include <stdio.h>
#include <math.h>

int maxSubArray(int* nums, int numsSize)
{
  int best = INT_MIN;
  int sum = 0;
  for(int i=0;i<numsSize;++i)
  {
    sum = fmax(nums[i], sum + nums[i]);
    best = fmax(best,sum);
  }
  return best;
}

int main()
{
  int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
  int len = sizeof arr / sizeof arr[0];

  printf("%d\n",maxSubArray(arr, len));

  return 0;
}
