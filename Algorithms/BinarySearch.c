#include <stdio.h>
#include <stdlib.h>

// https://en.wikipedia.org/wiki/Binary_search
int d_binary_search(int* arr, size_t len, int target)
{
  int low = 0;
  int high = len - 1;
  int mid = 0;

  while(low <= high)
  {
    mid = low + (high-low) / 2;

    if(arr[mid] == target) return mid;
    else if (mid < target) low = mid + 1;
    else high = mid - 1;
  }
  return -1;
}

int* dd_binary_search(int** arr, size_t rows, size_t cols, int* ret_size, int target)
{
  int low = 0;
  int mid = 0;
  int high = (rows * cols)-1;
  int row = 0, col = 0;

  while(low <= high)
  {
    mid = low + (high-low) / 2;
    row = mid / cols;
    col = mid % cols;

    if(arr[row][col] == target)
    {
      int* res = malloc(sizeof(int) * 2);
      if(!res) return NULL;
      res[0]=row;
      res[1]=col;
      *ret_size = 2;
      return res;
    }
    else if (arr[row][col] < target) low = mid + 1;
    else high = mid - 1;
  }

  *ret_size = 0;
  return NULL;
}

int main()
{
  int arr[] = {1,2,3,4,5,6,7,8};
  size_t len = sizeof arr / sizeof arr[0];

  int res = d_binary_search(arr, len, 1);

  if(res > -1) printf("Target at index: %d\n", res);
  else printf("Target not found\n");

  int rows = 3, cols = 3, ret_size = 0;
  int **arr3 = malloc(rows * sizeof(int*));
  for (size_t i = 0; i < rows; ++i) arr3[i] = malloc(cols * sizeof(int));

  arr3[0][0] = 1;
  arr3[0][1] = 3;
  arr3[0][2] = 5;
  arr3[1][0] = 2;
  arr3[1][1] = 4;
  arr3[1][2] = 6;
  arr3[2][0] = 8;
  arr3[2][1] = 9;
  arr3[2][2] = 15;

  int* res2 = dd_binary_search(arr3, rows, cols, &ret_size, 15);

  if(res2 != NULL)
  {
    printf("Target at index: ");
    for(size_t i=0;i<ret_size;++i) printf("[%d]", res2[i]);
  }
  else printf("Target not found\n");

  free(res2);

  for (size_t i = 0; i < rows; ++i) free(arr3[i]);
  free(arr3);

  return 0;
}
