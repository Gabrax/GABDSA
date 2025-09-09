/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */

#include <limits.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
  char* key;    
  char* value;  
} HashTable;

int cmpChar(const void* a, const void* b)
{
  return (*(char*)a - *(char*)b);
}

int cmpEntry(const void* a, const void* b)
{
  HashTable* ea = (HashTable*)a;
  HashTable* eb = (HashTable*)b;
  return strcmp(ea->key, eb->key);
}

char*** groupAnagrams(char** strs, int strsSize, int* returnSize, int** returnColumnSizes)
{
  if (strsSize == 0) {
      *returnSize = 0;
      *returnColumnSizes = NULL;
      return NULL;
  }

  HashTable* table = malloc(sizeof(HashTable) * strsSize);
  for (int i = 0; i < strsSize; i++) {
      char* str = strs[i];
      char* str_cpy = malloc(strlen(str) + 1);
      strcpy(str_cpy, str);
      qsort(str_cpy, strlen(str_cpy), sizeof(char), cmpChar);
      table[i].key = str_cpy;
      table[i].value = str;
  }

  qsort(table, strsSize, sizeof(HashTable), cmpEntry);

  char*** result = malloc(sizeof(char**) * strsSize);   
  *returnColumnSizes = malloc(sizeof(int) * strsSize);  
  int groupCount = 0;

  int i = 0;
  while (i < strsSize)
  {
      int j = i;
      while (j < strsSize && strcmp(table[i].key, table[j].key) == 0) {
          j++;
      }
      int groupSize = j - i;

      result[groupCount] = malloc(sizeof(char*) * groupSize);
      (*returnColumnSizes)[groupCount] = groupSize;

      for (int k = 0; k < groupSize; k++) {
          result[groupCount][k] = table[i + k].value;
      }

      groupCount++;
      i = j;
  }

  *returnSize = groupCount;
  return result;
}

int main()
{
  char* strs[] = {"eat","tea","tan","ate","nat","bat"};
  int strsSize = 6;

  int returnSize;
  int* returnColumnSizes;
  char*** groups = groupAnagrams(strs, strsSize, &returnSize, &returnColumnSizes);

  for (int i = 0; i < returnSize; i++) {
      printf("[ ");
      for (int j = 0; j < returnColumnSizes[i]; j++) {
          printf("%s ", groups[i][j]);
      }
      printf("]\n");
  }
  return 0;
}
