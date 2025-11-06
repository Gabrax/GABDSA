#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// https://en.wikipedia.org/wiki/Linked_list
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

  new_node->next = *head;
  *head = new_node;
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

void print_node_data(Node** head, int idx)
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

void sort_nodes_values(Node** head, bool ascending)
{
  if(*head == NULL || (*head)->next == NULL) return;

  Node* curr = *head;
  Node* last = NULL;
  int temp_val = 0;
  bool swapped;

  do {
    swapped = false;
    curr = *head;
    while(curr->next != last)
    {
      if(ascending && (curr->val > curr->next->val)
          || !ascending && (curr->val < curr->next->val))
      {
        temp_val = curr->val;
        curr->val = curr->next->val;
        curr->next->val = temp_val;
        swapped = true;
      }
      curr = curr->next;
    }
    last = curr;
  } while(swapped);
}

void reverse_nodes(Node** head)
{
  if(*head == NULL || (*head)->next == NULL) return;

  Node* curr = *head;
  Node* prev = NULL;
  Node* next = NULL;

  while(curr != NULL)
  {
    next = curr->next;
    curr->next = prev;
    prev = curr;
    curr = next;
  }
  *head = prev;
}

Node* merge_nodes(Node* head1, Node* head2)
{
  Node dummy;
  Node* tail = &dummy;
  dummy.next = NULL;

  while (head1 != NULL && head2 != NULL)
  {
    if (head1->val < head2->val)
    {
      tail->next = head1;          
      head1 = head1->next;         
    } 
    else
    {
      tail->next = head2;          
      head2 = head2->next;         
    }
    tail = tail->next;               
  }

  tail->next = (head1 != NULL) ? head1 : head2;

  return dummy.next; 
}

void delete_node(Node**head, int idx)
{
  Node* curr = *head;

  int counter = 0;
  while(curr != NULL)
  {
    if(counter == idx-1) break;
    curr = curr->next;
    ++counter;
  }

  if(curr == NULL || curr->next == NULL) return;

  Node* temp = curr->next;
  curr->next = temp->next;
  free(temp);
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
  insert_last(&head, 1);
  insert_last(&head, 12);
  insert_last(&head, 3);
  insert_last(&head, 44);
  insert_last(&head, 5);

  print_nodes(&head);
  delete_node(&head, 2);
  print_nodes(&head);
  /*insert_first(&head, 8);*/
  /*reverse_nodes(&head);*/
  /*sort_nodes_values(&head, false);*/
  /*print_node_data_by_val(&head, 2);*/
  /*print_node_data_by_idx(&head, 8);*/

  /*Node* head2 = NULL;*/
  /*insert_last(&head2, 6);*/
  /*insert_last(&head2, 7);*/
  /*insert_last(&head2, 18);*/
  /*insert_last(&head2, 9);*/
  /*insert_last(&head2, 10);*/

  /*Node* new_list = merge_nodes(head, head2);*/

  /*print_nodes(&new_list);*/


  free_nodes(&head);
  return 0;
}
