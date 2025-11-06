#include <stdio.h>
#include <stdlib.h>

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

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {

  if(head->next == NULL){
      free(head);
      return NULL;
  }

  struct ListNode* curr = head;
  int counter = 0;
  while(curr != NULL)
  {
      ++counter;
      curr = curr->next;
  }

  if(n==counter)
  {
      struct ListNode* temp = head;
      head = head->next;
      free(temp);
      return head;
  }

  curr = head;
  int counter2 = 1;
  while(curr != NULL)
  {
      if(counter2 == counter - n) break;
      curr = curr->next;
      ++counter2;
  }

  if(curr == NULL || curr->next == NULL) return head;

  struct ListNode* temp = curr->next;
  curr->next = temp->next;
  free(temp);
  return head;
}

int main()
{
  struct ListNode* head = NULL;
  insert(&head, 1);
  insert(&head, 2);
  insert(&head, 3);
  insert(&head, 4);
  insert(&head, 5);
  struct ListNode* new_head = removeNthFromEnd(head, 2);
  print(&new_head);

  return 0;
}
