#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {
  int* mem;
  unsigned back;
  unsigned front;
  unsigned size;
} Queue;

void q_init(Queue* q,int size)
{
  q->size = size;
  q->mem = malloc(sizeof(int) * q->size);
  q->back = 0;
  q->front = 0;
}

void q_push(Queue* q, int val)
{
  if (q->back >= q->size) {
    printf("Reached the limit!\n");
    return;
  }

  q->mem[q->back++] = val;
}

int q_front(Queue* q)
{
  if (q->front == q->back)
  {
    printf("Queue is empty!\n");
    return -1;
  }
  return q->mem[q->front];
}

int q_back(Queue* q)
{
  if (q->front == q->back)
  {
    printf("Queue is empty!\n");
    return -1;
  }

  return q->mem[q->back - 1];
}

void q_pop(Queue* q)
{
  if (q->front < q->back) q->front++;
  else printf("Queue is empty!\n");
}

void q_print(Queue* q)
{
  for (unsigned i=q->front;i<q->back;++i)
  {
    printf("%d ", q->mem[i]);
  }
  printf("\n");
}

int main()
{
  Queue q;
  q_init(&q, 10);

  q_push(&q, 0);
  q_push(&q, 1);
  q_push(&q, 2);
  q_push(&q, 3);

  q_print(&q);

  printf("Top: %d\n", q_front(&q));
  printf("Back: %d\n", q_back(&q));
  q_pop(&q);
  q_print(&q);

  free(q.mem);
  return 0;
}
