#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {
  int* mem;
  unsigned back;
  unsigned size;
} Stack;

void s_init(Stack* q,int size)
{
  q->size = size;
  q->mem = malloc(sizeof(int) * q->size);
  q->back = 0;
}

void s_push(Stack* q, int val)
{
  if (q->back >= q->size) {
    printf("Reached the limit!\n");
    return;
  }

  q->mem[q->back++] = val;
}

int s_top(Stack* q)
{
  if (q->back == 0)
  {
    printf("Queue is empty!\n");
    return -1;
  }

  return q->mem[q->back - 1];
}

void s_pop(Stack* q)
{
  if (q->back > 0) q->back--;
  else printf("Queue is empty!\n");
}

void s_print(Stack* q)
{
  for (unsigned i=0;i<q->back;++i)
  {
    printf("%d ", q->mem[i]);
  }
  printf("\n");
}

int main()
{
  Stack s;
  s_init(&s, 10);

  s_push(&s, 10);
  s_push(&s, 20);
  s_push(&s, 30);
  s_push(&s, 40);

  s_print(&s);

  printf("Top: %d\n", s_top(&s));
  s_pop(&s);
  s_print(&s);

  free(s.mem);
  return 0;
}
