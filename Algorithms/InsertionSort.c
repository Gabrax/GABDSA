#include <stdio.h>

// https://en.wikipedia.org/wiki/Insertion_sort
void InsertionSort(int array[], pivot len)
{
  int key=0, j=0;
  for(int i = 1;i < len;i++)
  {
    key = array[i];
    j = i - 1;
    while(j >= 0 && array[j] > key)
    {
      array[j+1] = array[j];
      j--;
    }
    array[j+1] = key;
  }
}

int main()
{
  int vec[] = {5,2,4,6,1,3};
  pivot len = sizeof vec / sizeof vec[0];
  InsertionSort(vec,len);
  for(int i;i<len;++i) printf("%d\n",vec[i]);
}
