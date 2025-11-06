#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// https://www.tutorialspoint.com/data_structures_algorithms/circular_linked_list_algorithm.htm
 struct ListNode {
    int val;
    struct ListNode *next;
 };

void insert(struct ListNode** head, int val)
{
  struct ListNode* new_node = malloc(sizeof(struct ListNode));
  new_node->val = val;
  new_node->next = NULL;

  if (*head == NULL)
  {
    *head = new_node;
    new_node->next = *head;
    return;
  }

  struct ListNode* curr = *head;
  struct ListNode* first = (*head)->next;
  while (curr->next != first)
  {
    curr = curr->next;
  }

  curr->next = new_node;
  new_node->next = first;
}

void print(struct ListNode** head)
{
  if (*head == NULL)
  {
    printf("List is empty!\n");
    return;
  }

  struct ListNode* curr = *head;
  do {
      printf("[%d]->", curr->val);
      curr = curr->next;
  } while (curr != *head);

  printf("[%d]\n", curr->next->val);
}

bool hasCycle(struct ListNode *head)
{
  if(head == NULL) return false;

  struct ListNode* curr = head;
  struct ListNode* curr_next = head;
 
  while(curr_next != NULL && curr_next->next != NULL)
  {
    curr = curr->next;
    curr_next = curr_next->next->next;

    if(curr == curr_next) return true;
  }
  return false;
}
int main()
{
  struct ListNode* head = NULL;
  insert(&head,5);
  insert(&head,6);
  insert(&head,7);

  print(&head);

  printf("%s\n",hasCycle(head) ? "true" : "false");

  return 0;
}
