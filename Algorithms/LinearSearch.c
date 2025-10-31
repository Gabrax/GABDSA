#include <stdio.h>

// https://en.wikipedia.org/wiki/Linear_search

int d_linear_search(int* arr, size_t size, int target)
{
  for (size_t i = 0; i < size; ++i)
  {
    if (arr[i] == target) return i; 
  }
  return -1; 
}

// static 2D arrays as argument have to have specified column size
void dd_linear_search(int arr[][3], size_t rows, size_t cols, int* res, int target)
{
  for (size_t i = 0; i < rows; ++i)
  {
    for (size_t j = 0; j < cols; ++j)
    {
      if (arr[i][j] == target)
      {
        res[0] = i;
        res[1] = j;
      }
    }
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5};
  size_t size = sizeof(arr) / sizeof(arr[0]);

  int res = d_linear_search(arr, size, 3);
  if(res >= 0) printf("Target at index: %d\n",res);
  else printf("Target not found\n");

  int arr2[][3] = {{1,2,5},{7,57,42},{2,5,7}};
  size_t rows = sizeof(arr2) / sizeof(arr2[0]);
  size_t cols = sizeof(arr2[0]) / sizeof(arr2[0][0]);

  int res2[2] = {0};
  dd_linear_search(arr2, rows, cols, res2, 57);
  printf("Target at index: [%d:%d]\n",res2[0],res2[1]);

  return 0;
}

