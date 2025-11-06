#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// https://en.wikipedia.org/wiki/Doubly_linked_list
typedef struct Node {
    int val;
    struct Node* prev;
    struct Node* next;
} Node;

void insert_last(Node** head, int new_val)
{
  Node* new_node = (Node*)malloc(sizeof(Node));
  new_node->val = new_val;
  new_node->next = NULL;
  new_node->prev = NULL;

  if(*head == NULL)
  {
    *head = new_node;
    return;
  }

  Node* curr = *head;
  while(curr->next != NULL)
  {
    curr = curr->next;
  }

  curr->next = new_node;
  new_node->prev = curr;
}

void insert_first(Node** head, int new_val)
{
  Node* new_node = (Node*)malloc(sizeof(Node));
  new_node->val = new_val;
  new_node->next = NULL;
  new_node->prev = NULL;

  if(*head == NULL)
  {
    *head = new_node;
    return;
  }

  (*head)->prev = new_node;
  new_node->next = *head;
  *head = new_node;
}

int nodes_len(Node** head)
{
  Node* curr = *head;
  int counter = 0;
  while(curr != NULL)
  {
    curr = curr->next;
    ++counter;
  }
  return counter;
}

void print_node_data(Node** head, int idx)
{
  Node* curr = *head;
  int counter = 0;
  while(curr != NULL)
  {
    if(counter == idx)
    {
      printf("Node at idx %d has value %d\n",idx,curr->val);
      if(curr->prev)printf("Node has prev val %d\n",curr->prev->val);
      else printf("Node has no prev\n");

      if (curr->next) printf("Node has next val %d\n", curr->next->val);
      else printf("Node has no next\n");
      break;
    }
    curr = curr->next;
    ++counter;
  }
  if(counter < idx) printf("Index out of bounds\n");
}

void print_nodes(Node** head)
{
  Node* curr = *head;
  int counter = 0;
  while(curr != NULL)
  {
    printf("Node %d:[%d]->",counter,curr->val);
    curr = curr->next;
    ++counter;
  }
  printf("NULL\n");
}

void sort_nodes_values(Node** head, bool ascending)
{
  if(*head == NULL || (*head)->next == NULL) return;

  Node* curr = *head;
  int temp_val = 0;

  if(ascending == true)
  {
    while(curr->next != NULL)
    {
      if((curr->val > curr->next->val))
      {
        temp_val = curr->val;
        curr->val = curr->next->val;
        curr->next->val = temp_val;
      }
      curr = curr->next;
    }
  }
  else if(ascending == false)
  {
    while(curr->next != NULL)
    {
      if((curr->val < curr->next->val))
    {
        temp_val = curr->val;
        curr->val = curr->next->val;
        curr->next->val = temp_val;
      }
      curr = curr->next;
    }
  }
}

void reverse_nodes(Node** head)
{
  if(*head == NULL || (*head)->next == NULL) return;

  Node* curr = *head;
  Node* temp = NULL;

  while(curr != NULL)
  {
    temp = curr->prev;
    curr->prev = curr->next;
    curr->next = temp;
    curr = curr->prev;
  }
  if(temp != NULL) *head = temp->prev;
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
  insert_last(&head, 4);
  insert_last(&head, 1);
  insert_last(&head, 3);
  insert_last(&head, 10);
  insert_first(&head, 8);
  insert_first(&head, 9);
  /*sort_nodes_values(&head, false);*/
  reverse_nodes(&head);
  print_nodes(&head);
  /*print_node_data_by_val(&head, 8);*/
  /*print_node_data_by_idx(&head, 2);*/

  free_nodes(&head);
  return 0;
}
