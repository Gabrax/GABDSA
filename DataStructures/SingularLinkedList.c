#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
  int val;
  struct Node* next;
} Node;

void insert_last(Node** head, int new_val)
{
  Node* new_node = (Node*)malloc(sizeof(Node));
  new_node->val = new_val;
  new_node->next = NULL;

  if(*head == NULL)
  {
    *head = new_node;
    return;
  }

  Node* curr = *head;
  while(curr->next != NULL) curr = curr->next;

  curr->next = new_node;
}

void insert_first(Node** head, int new_val)
{
  Node* new_node = (Node*)malloc(sizeof(Node));
  new_node->val = new_val;
  new_node->next = NULL;

  if(*head == NULL)
  {
    *head = new_node;
    return;
  }

  Node* temp = *head;
  *head = new_node;
  (*head)->next = temp;
}

int nodes_len(Node** head)
{
  Node* curr = *head;
  int counter = 0;

  while (curr != NULL)
  {
    curr = curr->next;
    ++counter;
  }

  return counter;
}

void print_node_val(Node** head, int idx)
{
  Node* curr = *head;
  int counter = 0;

  while (curr != NULL && counter < idx)
  {
    curr = curr->next;
    ++counter;
  }

  if (curr == NULL)
  {
    printf("Index %d is out of bounds!\n", idx);
    return;
  }

  printf("At node [%d] is value %d\n", idx, curr->val);
}

void print_node_idx(Node** head, int val)
{
  Node* curr = *head;
  int counter = 0;

  while(curr != NULL)
  {
    if(curr->val == val)
    {
      printf("Value %d is at node [%d]\n", val, counter);
      return;
    }
    curr = curr->next;
    ++counter;
  }
  printf("Value not found\n");
}

void print_nodes(Node** head)
{
  Node* curr = *head;
  while(curr != NULL)
  {
    printf("[%d]->",curr->val);
    curr = curr->next;
  }
  printf("NULL\n");
}

void free_nodes(Node** head)
{
  Node* temp;
  while (*head != NULL)
  {
      temp = *head;
      *head = (*head)->next;
      free(temp);
  }

  *head = NULL; 
}

int main()
{
  Node* head = NULL;
  insert_last(&head, 5);
  insert_last(&head, 7);
  insert_first(&head, 8);
  print_nodes(&head);
  print_node_val(&head, 2);
  print_node_idx(&head, 8);

  free_nodes(&head);
  return 0;
}
