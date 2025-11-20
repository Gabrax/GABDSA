#include <stdio.h>
#include <stdlib.h>

static inline int cmp(const void* a, const void* b)
{
  return *(int*)a - *(int*)b;
}

void swap(int* a,int* b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

int partition(int* arr, size_t low, size_t high)
{
  size_t mid = low + (high-low) / 2;
  int pivotVal = arr[mid];
  swap(&arr[mid],&arr[high]);

  int currPos = low;
  for(size_t i = low;i<high;++i)
  {
    if(arr[i] < pivotVal)
    {
      swap(&arr[i],&arr[currPos]);
      currPos++;
    }
  }
  swap(&arr[currPos],&arr[high]);
  return currPos;
}

// https://en.wikipedia.org/wiki/Quicksort
void QUICK_SORT(int* arr, size_t low, size_t high)
{
  if(low < high)
  {
    size_t pivot = partition(arr, low, high);
    QUICK_SORT(arr, low, pivot-1);
    QUICK_SORT(arr, pivot+1, high);
  }
}

#define ARR_LEN(arr) (sizeof arr / sizeof arr[0]);

int main(void)
{
  int arr[] = {4,3,1,2,5,9,7,10,6};
  size_t len = ARR_LEN(arr);

  QUICK_SORT(arr, 0,len-1);

  for(size_t i=0;i<len;++i) printf("%d ", arr[i]);

  return 0;
}

//               [4, 2, 5, 1, 7]
//                      |
//                  pivot = 5
//          ----------------------------
//          |                          |
//       [1, 2, 4]                    [7]
//           |
//        pivot = 2
//    -----------------
//    |               |
//   [1]             [4]
