#include <limits.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int search(int* nums, int numsSize, int target)
{
  int low = 0;
  int high = numsSize-1;
  int mid = 0;

  while (low <= high)
  {
    mid = (low + high) / 2;

    if(nums[mid] == target) return mid;
    else if(nums[mid] < target) low = mid+1;
    else high = mid-1;
  }

  return -1;
}

int main()
{

  int arr[] = {-1,0,3,5,9,12};

  int arr_size = sizeof(arr) / sizeof(arr[0]);

  printf("%d\n",search(arr, arr_size, 4));

  return 0;
}
