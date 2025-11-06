#include <stdio.h>
#include <stdbool.h>

bool canJump(int* nums, int numsSize)
{
  int moves = 0;
  for(int i=0;i < numsSize;++i)
  {
    if(moves < 0) return false;
    else if(nums[i] > moves) moves = nums[i];

    --moves;
  }

  return true;
}

int main()
{
  int arr[] = {2,3,1,1,4};
  /*int arr[] = {3,2,1,0,4};*/
  int len = sizeof arr / sizeof arr[0];

  printf("%s\n",canJump(arr,len) ? "true" : "false");

}
