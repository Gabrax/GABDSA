#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int findDuplicate(int* nums, int numsSize)
{
  bool* hash = calloc(numsSize, sizeof(bool));

  for(size_t i=0;i<numsSize;++i)
  {
    int num = nums[i];
    if(hash[num]) return num;
    else hash[num] = true; 
  }
  free(hash);
  return 0;
}

int main()
{
  int arr[] = {1,2,3,4,3};
  int len = sizeof arr / sizeof arr[0];

  int res = findDuplicate(arr, len);

  printf("%d\n",res);

  return 0;
}
