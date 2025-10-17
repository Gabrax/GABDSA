#include <stdio.h>
#include <stdlib.h>

int* twoSum(int* numbers, int numbersSize, int target, int* returnSize)
{
  int left = 0;
  int right = numbersSize - 1;

  while (left < right)
  {
      int sum = numbers[left] + numbers[right];

      if (sum == target)
      {
          int* arr = malloc(sizeof(int) * 2);
          arr[0] = left + 1;  
          arr[1] = right + 1;
          *returnSize = 2;
          return arr;
      }
      else if (sum < target)
      {
          left++;
      }
      else
      {
          right--;
      }
  }

  *returnSize = 0;
  return NULL;
}

int main()
{
  int arr[] = {2,7,11,15};
  int size = sizeof(arr) / sizeof(arr[0]);
  int return_size = 0;

  int* res = twoSum(arr, size, 9, &return_size);

  printf("%d : %d\n",res[0],res[1]);
}
