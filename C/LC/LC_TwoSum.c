#include <limits.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* twoSum(int* nums, int numsSize, int target, int* returnSize)
{
  for (int i = 0; i < numsSize; i++)
    for (int j = i + 1; j < numsSize; j++)
      if (nums[i] + nums[j] == target)
      {
        int* table = (int*)malloc(sizeof(int) * 2);
        table[0] = i;
        table[1] = j;
        *returnSize = 2;  
        return table;     
      }

  *returnSize = 0; 
  return NULL;
}

int main()
{
  int arr[] = {3,2,4};
  int size = (sizeof arr / sizeof arr[0]);

  int ret_size = 0;
  int* table = twoSum(arr, size, 6, &ret_size);

  for(size_t i = 0; i < ret_size;i++)
  {
    printf("%d\n",table[i]);
  }

  return 0;
}
