#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct HashSet {
    int** buckets;       // array of int pointers (each bucket holds an array of integers)
    int* bucket_sizes;   // how many elements in each bucket
    int* bucket_capacity;// current capacity of each bucket
    size_t capacity;
} HashSet;

void hs_init(HashSet* s,size_t capacity)
{
  s->buckets = calloc(capacity, sizeof(int*));
  s->bucket_sizes = calloc(capacity, sizeof(int));
  s->bucket_capacity = calloc(capacity, sizeof(int));
  s->capacity = capacity;
}

bool hs_contains(HashSet* s, int val)
{
  unsigned idx = (unsigned)val % s->capacity;
  int size = s->bucket_sizes[idx];
  int* bucket = s->buckets[idx];
  for (int i = 0; i < size; ++i)
      if (bucket[i] == val) return true;
  return false;
}

void hs_add(HashSet* s, int val)
{
  unsigned idx = (unsigned)val % s->capacity;
  int size = s->bucket_sizes[idx];
  int cap = s->bucket_capacity[idx];

  // if not in the set, add it
  if (!hs_contains(s, val))
  {
    // allocate bucket if needed
    if (cap == 0) {
        s->buckets[idx] = malloc(sizeof(int) * 4);
        s->bucket_capacity[idx] = 4;
        cap = 4;
    }
    // grow bucket if full
    else if (size >= cap) {
        cap *= 2;
        s->buckets[idx] = realloc(s->buckets[idx], sizeof(int) * cap);
        s->bucket_capacity[idx] = cap;
    }

    s->buckets[idx][size] = val;
    s->bucket_sizes[idx]++;
  }
}

void hs_remove(HashSet* s, int val)
{
  unsigned idx = (unsigned)val % s->capacity;
  int size = s->bucket_sizes[idx];
  int* bucket = s->buckets[idx];

  for (int i = 0; i < size; ++i)
  {
    if (bucket[i] == val)
    {
      // Shift remaining elements left
      for (int j = i; j < size - 1; ++j)
          bucket[j] = bucket[j + 1];

      s->bucket_sizes[idx]--;
      return;
    }
  }

  printf("Value %d not found in set.\n", val);
}

void hs_print(HashSet* s)
{
  size_t size = s->capacity;
  for (int i = 0; i < size; ++i)
  {
    int size = s->bucket_sizes[i];
    if (size == 0) continue;  

    printf("Bucket %d: ", i);
    for (int j = 0; j < size; ++j)
    {
        printf("%d ", s->buckets[i][j]);
    }
    printf("\n");
  }
}

void hs_free(HashSet* s)
{
  size_t size = s->capacity;
  for (int i = 0; i < size; ++i) free(s->buckets[i]);
  free(s->buckets);
  free(s->bucket_sizes);
  free(s->bucket_capacity);
}

int main()
{
  HashSet s;
  hs_init(&s,50);

  hs_add(&s, 10);
  hs_add(&s, 20);
  hs_add(&s, 10);

  printf("%d\n", hs_contains(&s, 20));
  printf("%d\n", hs_contains(&s, 30));

  hs_free(&s);
  return 0;
}
