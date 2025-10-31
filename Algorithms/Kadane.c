#include <limits.h>
#include <stdio.h>
#include <math.h>

// Kadane's Algorithm = find the maximum subarray sum
int maxSubarraySum(int* nums,size_t len)
{
  int maxSum = INT_MIN;
  int currentSum = 0;

  for (int i=0;i<len;++i)
  {
    currentSum = fmax(nums[i], currentSum + nums[i]);
    maxSum = fmax(maxSum, currentSum);
  }
  return maxSum;
}

int main()
{
  int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  size_t len = sizeof arr / sizeof arr[0];

  printf("maxSubarraySum is: %d\n", maxSubarraySum(arr, len));
}
