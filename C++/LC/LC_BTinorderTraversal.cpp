#include <cstddef>
#include <ios>
#include <iostream>
#include <vector>


struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };


void help(TreeNode* root, std::vector<int>& res){
  if(root != NULL){
    help(root->left,res);
    res.push_back(root->val);
    help(root->right,res);
  }
}


std::vector<int> inorderTraversal(TreeNode* root) {

  std::ios::sync_with_stdio(0);
  std::cin.tie(0);

  std::vector<int> res;
  help(root,res);
  return res;
}


int main(){




  return 0;
}
