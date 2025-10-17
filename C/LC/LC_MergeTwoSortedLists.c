#include <stdio.h>

typedef struct ListNode {
    int val;
    struct ListNode *next;
} ListNode;

ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2)
{
  ListNode dummy;
  ListNode *tail = &dummy;
  dummy.next = NULL;

  while (list1 != NULL && list2 != NULL)
  {
    if (list1->val < list2->val)
    {
      tail->next = list1;          
      list1 = list1->next;         
    } 
    else
    {
      tail->next = list2;          
      list2 = list2->next;         
    }
    tail = tail->next;               
  }

  tail->next = (list1 != NULL) ? list1 : list2;

  return dummy.next; 
}

int main()
{
  ListNode* list1 = NULL;
  ListNode* list2 = NULL;

  ListNode* head = mergeTwoLists(list1, list2);

  for (ListNode *cur = head; cur != NULL; cur = cur->next) {
    printf("%d\n", cur->val);
  }

  return 0;
}
