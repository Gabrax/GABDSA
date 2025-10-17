#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ARR_LEN(arr) (sizeof arr / sizeof arr[0]); 

static inline int cmp(const void* a, const void* b)
{
  return *(int*)a - *(int*)b;
}

void BUBBLE_SORT(int* arr, size_t len, int(*cmp)(const void*, const void*))
{
  if (len <= 1) { 
      printf("Nothing to sort\n"); 
      return; 
  }
  for(size_t i = 0; i < len; ++i) 
    for(size_t j = i+1; j < len; ++j)
      if(cmp(&arr[i], &arr[j]) > 0) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
      } 
}

int main(void)
{
  int arr[] = {4,2,5,1,7};
  size_t len = ARR_LEN(arr);
  BUBBLE_SORT(arr, len, cmp);

  for(size_t i=0;i<len;++i) printf("%d ", arr[i]);

  return 0;
}
