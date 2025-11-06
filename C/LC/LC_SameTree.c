#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct TreeNode {
  int val;
  struct TreeNode *left;
  struct TreeNode *right;
};

void insert(struct TreeNode** root, int val)
{
  struct TreeNode* new_node = malloc(sizeof(struct TreeNode));
  new_node->val = val;
  new_node->left = NULL;
  new_node->right = NULL;

  if(!*root)
  {
    *root=new_node;
    return;
  }

  struct TreeNode* curr = *root;
  struct TreeNode* parent = NULL;
  while(curr)
  {
    parent = curr;
    if(val < curr->val) curr = curr->left;
    else curr = curr->right;
  }

  if(val < parent->val) parent->left = new_node;
  else parent->right = new_node;
}

bool inorder(struct TreeNode* p, struct TreeNode* q)
{
  if(!p && !q) return true;
  if(!p || !q) return false;
  if(p->val != q->val) return false;
  return inorder(p->left,q->left) && inorder(p->right,q->right);
}

bool isSameTree(struct TreeNode* p, struct TreeNode* q)
{
  return inorder(p, q);
}

int main()
{
  struct TreeNode* root = NULL;
  insert(&root,1);
  insert(&root,2);
  insert(&root,3);
  struct TreeNode* root2 = NULL;
  insert(&root2,1);
  insert(&root2,2);
  insert(&root2,4);

  printf("%s\n",isSameTree(root, root2) ? "y":"n");

  return 0;
}
