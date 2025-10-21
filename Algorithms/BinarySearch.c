#include <stdio.h>

int d_binary_search(int* arr, size_t len, int target)
{
  int low = 0;
  int high = len - 1;
  int mid = 0;

  while(low < high)
  {
    mid = low + (high-low) / 2;

    if(arr[mid] == target) return mid;
    else if (mid < target) low++;
    else high--;
  }
  return -1;
}

int main()
{
  int arr[] = {1,2,3,4,5,6,7,8};
  size_t len = sizeof arr / sizeof arr[0];

  int res = d_binary_search(arr, len, 1);

  if(res > -1) printf("%d\n", res);
  else printf("target not found");

  return 0;
}
