#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>

typedef struct MetaData
{
  size_t length;
  size_t capacity;

} MetaData;

#define CAST_TO_META(arr) ((MetaData*)((int8_t*)(arr) - sizeof(MetaData)))
#define DA_CAP(arr) (arr ? CAST_TO_META(arr)->capacity : 0)
#define DA_LEN(arr) (arr ? CAST_TO_META(arr)->length : 0)

void* resize(void* arr, size_t new_length, size_t num_elem)
{
  size_t new_capacity = DA_CAP(arr) ? DA_CAP(arr) * 2 : 4;
  if(new_capacity < new_length) new_capacity = new_length;
  size_t new_size = sizeof(MetaData) + new_capacity * num_elem;

  MetaData* data;
  if(arr)
  {
    data = realloc(CAST_TO_META(arr), new_size);
  }
  else {
    data = malloc(new_size);
    data->length = 0;
  }

  data->capacity = new_capacity;
  return (int8_t*)data + sizeof(MetaData);
}

#define arr_insert(arr,val) ( arr = resize(arr,DA_LEN(arr) + 1,sizeof(*arr)), arr[CAST_TO_META(arr)->length++] = val )
#define arr_pop(arr) \
    do { \
        if (arr && CAST_TO_META(arr)->length > 0) { \
            CAST_TO_META(arr)->length--; \
            arr = resize(arr, CAST_TO_META(arr)->length, sizeof(*arr)); \
        } \
    } while (0)
#define arr_back(arr) ( arr[CAST_TO_META(arr)->length-1] )
#define arr_front(arr) ( arr[0] )
#define arr_free(arr) \
    do { \
        if (arr) { \
            free(CAST_TO_META(arr)); \
            arr = NULL; \
        } \
    } while (0)

int main()
{
  float* arr = NULL;

  arr_insert(arr,5.0);
  arr_insert(arr,6.0);

  printf("%f\n", arr_back(arr));
  printf("%f\n", arr_front(arr));

  printf("%p\n",(void*)&(*CAST_TO_META(arr)));
  printf("%p\n",(void*)&(arr[0]));
  printf("%p\n",(void*)&(arr[1]));

  arr_free(arr);

  return 0;
}
