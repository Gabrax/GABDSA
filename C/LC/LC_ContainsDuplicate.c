#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool containsDuplicate(int* nums, int numsSize) {

    int hashTableSize = 2000000001;  
    bool* hashTable = (bool*)calloc(hashTableSize, sizeof(bool));  
    
    for (int i = 0; i < numsSize; i++) {
        long index = nums[i] + 1000000000;  
        
        if (hashTable[index]) {
            free(hashTable);  
            return true;  
        }
        
        hashTable[index] = true;  
    }
    
    free(hashTable);  
    return false;  
}

int main()
{
  int32_t arr[] = {1,2,3,4,5,1};
  int32_t size = sizeof(arr)/sizeof(arr[0]);

  printf("%d\n",containsDuplicate(arr, size));

  return 0;
}
