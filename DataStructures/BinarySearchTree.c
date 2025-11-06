#include <stdio.h>
#include <stdlib.h>

// https://en.wikipedia.org/wiki/Binary_search_tree
typedef struct TreeNode {
  int val;
  struct TreeNode* left;
  struct TreeNode* right;
} TreeNode;

void insert(TreeNode** root, int val)
{
  TreeNode* new_node = malloc(sizeof(TreeNode));
  new_node->val = val;
  new_node->left = NULL;
  new_node->right = NULL;

  if(*root == NULL)
  {
    *root = new_node;
    return;
  }

  TreeNode* curr = *root;
  TreeNode* parent = NULL;
  while(curr != NULL)
  {
    parent = curr;
    if(val < curr->val) curr = curr->left;
    else curr = curr->right; 
  }

  if(val < parent->val) parent->left = new_node;
  else parent->right = new_node;
}

TreeNode* search(TreeNode** root, int val)
{
  TreeNode* curr = *root;

  while(curr != NULL && curr->val != val)
  {
    if(val < curr->val) curr = curr->left;
    else curr = curr->right;
  }
  return curr;
}

void print_inorder(TreeNode* root)
{
  if(root == NULL) return;

  print_inorder(root->left);
  printf("%d ",root->val);
  print_inorder(root->right);
}

void print_preorder(TreeNode* root)
{
  if(root == NULL) return;

  printf("%d ",root->val);
  print_preorder(root->left);
  print_preorder(root->right);
}

void print_postorder(TreeNode* root)
{
  if(root == NULL) return;

  print_postorder(root->left);
  print_postorder(root->right);
  printf("%d ",root->val);
}

int main()
{
  TreeNode* root = NULL;
  insert(&root,5);
  insert(&root,15);
  insert(&root,2);
  insert(&root,10);
  insert(&root,25);
  print_inorder(root);
  printf("\n");
  print_preorder(root);
  printf("\n");
  print_postorder(root);
  printf("\n");

  TreeNode* res = search(&root, 10);
  printf("%d\n",res->val);

  return 0;
}
