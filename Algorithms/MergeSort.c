#include <stdio.h>
#include <stdlib.h>

// https://en.wikipedia.org/wiki/Merge_sort
void merge(int* arr, int* temp, int left, int middle, int right)
{
  int i = left;
  int j = middle + 1;
  int k = left;

  while (i <= middle && j <= right)
  {
    if (arr[i] <= arr[j]) temp[k++] = arr[i++];
    else temp[k++] = arr[j++];
  }

  while (i <= middle) temp[k++] = arr[i++];

  while (j <= right) temp[k++] = arr[j++];

  for (int n = left; n <= right; n++) arr[n] = temp[n];
}

void mergeSortNoAlloc(int* arr, int* temp, int left, int right)
{
  if (left < right)
  {
    int mid = left + (right - left) / 2;

    mergeSortNoAlloc(arr, temp, left, mid);
    mergeSortNoAlloc(arr, temp, mid + 1, right);
    merge(arr, temp, left, mid, right);
  }
}

int main()
{
  int arr[] = {4,3,1,2,5,9,7,10,6};
  int len = sizeof(arr) / sizeof(arr[0]);

  int* temp = malloc(len * sizeof(int)); 

  mergeSortNoAlloc(arr, temp, 0, len - 1);

  free(temp);

  for (int i = 0; i < len; i++) printf("%d ", arr[i]);
  printf("\n");
}

//                          [12 11 13 5 6 7]
//                         /                \
//                [12 11 13]              [5 6 7]
//                /       \               /     \
//            [12 11]     [13]        [5 6]     [7]
//            /     \                           / \
//          [12]   [11]                       [5] [6]
//
//--------------------------------------------------------------
// Now the merges (bottom-up):

//           merge([12], [11]) → [11 12]
//           merge([5],  [6])  → [5 6]

//           merge([11 12], [13]) → [11 12 13]
//           merge([5 6],   [7])  → [5 6 7]

//   final merge:
//           merge([11 12 13], [5 6 7])
//           → [5 6 7 11 12 13]
