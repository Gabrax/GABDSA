#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct ListNode {
  int val;
  struct ListNode *next;
};

void insert(struct ListNode** head, int val)
{
  struct ListNode* new_node = malloc(sizeof(struct ListNode));
  new_node->val = val;
  new_node->next = NULL;
 
  if(*head == NULL)
  {
    *head = new_node;
    return;
  }

  struct ListNode* curr = *head;
  while(curr->next != NULL)
  {
    curr = curr->next;
  }

  curr->next = new_node;
}

void print(struct ListNode** head)
{
  struct ListNode* curr = *head;
  while(curr != NULL)
  {
    printf("%d->",curr->val);
    curr = curr->next;
  }
  printf("\n");
}

struct ListNode* deleteDuplicates(struct ListNode* head)
{
  struct ListNode* curr = head;

  while (curr != NULL && curr->next != NULL)
  {
    if (curr->val == curr->next->val)
    {
      struct ListNode* to_free = curr->next;
      curr->next = curr->next->next;
      free(to_free);
    }
    curr = curr->next;
  }

  return head;
}

int main()
{
  struct ListNode* head = NULL;
  insert(&head, 1);
  insert(&head, 1);
  insert(&head, 2);
  insert(&head, 3);
  insert(&head, 3);

  print(&head);

  struct ListNode* res = deleteDuplicates(head);
  print(&res);

  return 0;
}
