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

#define ARR_PUSH(arr,val) ( arr = resize(arr,DA_LEN(arr) + 1,sizeof(*arr)), arr[CAST_TO_META(arr)->length++] = val )
#define ARR_POP(arr) \
    do { \
        if (arr && CAST_TO_META(arr)->length > 0) { \
            CAST_TO_META(arr)->length--; \
            arr = resize(arr, CAST_TO_META(arr)->length, sizeof(*arr)); \
        } \
    } while (0)
#define ARR_TOP(arr) ( arr[CAST_TO_META(arr)->length-1] )

int main()
{
  float* arr = NULL;

  ARR_PUSH(arr,5.0);
  ARR_PUSH(arr,6.0);

  printf("%d\n", CAST_TO_META(arr)->capacity);
  printf("%d\n", CAST_TO_META(arr)->length);

  printf("%p\n",(void*)&(*CAST_TO_META(arr)));
  printf("%p\n",(void*)&(arr[0]));
  printf("%p\n",(void*)&(arr[1]));

  return 0;
}
