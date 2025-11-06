#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    return;
  }

  struct ListNode* curr = *head;
  while (curr->next != NULL)
  {
    curr = curr->next;
  }

  curr->next = new_node;
}

void print(struct ListNode** head)
{
  if (*head == NULL)
  {
    printf("List is empty!\n");
    return;
  }

  struct ListNode* curr = *head;
  while(curr != NULL)
  {
    printf("%d ",curr->val);
    curr = curr->next;
  }
  printf("\n");
}

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
  struct ListNode* result = NULL;
  struct ListNode** tail = &result;
  int carry = 0;

  while (l1 != NULL || l2 != NULL || carry)
  {
    int x = (l1 != NULL) ? l1->val : 0;
    int y = (l2 != NULL) ? l2->val : 0;
    int sum = x + y + carry;
    carry = sum / 10;
    int digit = sum % 10;

    struct ListNode* node = malloc(sizeof(struct ListNode));
    node->val = digit;
    node->next = NULL;

    *tail = node;
    tail = &((*tail)->next);

    if (l1) l1 = l1->next;
    if (l2) l2 = l2->next;
  }

  return result;
}

int main()
{
  struct ListNode* head1 = NULL;
  insert(&head1,9);
  struct ListNode* head2 = NULL;
  insert(&head2,1);
  insert(&head2,9);
  insert(&head2,9);
  insert(&head2,9);
  insert(&head2,9);
  insert(&head2,9);
  insert(&head2,9);
  insert(&head2,9);
  insert(&head2,9);
  insert(&head2,9);

  struct ListNode* res = addTwoNumbers(head1, head2);
  print(&res);

  return 0;
}
