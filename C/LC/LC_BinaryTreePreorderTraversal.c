#include <stdio.h>
#include <stdlib.h>

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

void inorder(struct TreeNode* root)
{
  if(!root) return;

  inorder(root->left);
  printf("%d\n",root->val);
  inorder(root->right);
}

void preorderHelper(struct TreeNode* root, int* res, int* index)
{
  if (root == NULL) return;

  res[(*index)++] = root->val;
  preorderHelper(root->left, res, index);
  preorderHelper(root->right, res, index);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize)
{
  *returnSize = 0;
  if(root == NULL) return NULL;

  int* res = malloc(sizeof(int) * 100);
  int idx = 0;
  preorderHelper(root, res, &idx);
  *returnSize = idx;
  return res;
}

int main()
{
  struct TreeNode* root = NULL;
  insert(&root,1);
  insert(&root,2);
  insert(&root,3);
  insert(&root,4);
  insert(&root,5);
  insert(&root,8);
  insert(&root,6);
  insert(&root,7);
  insert(&root,9);

  /*inorder(root);*/

  int ret = 0;
  int* res = preorderTraversal(root, &ret);
  for(int i=0;i<ret;++i) printf("%d\n",res[i]);

  return 0;
}
