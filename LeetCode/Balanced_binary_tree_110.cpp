#include <bits/stdc++.h>
using namespace std;

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };

class Solution {
public:
    int depth(TreeNode* root){
        if(!root)return 0;
        int left=depth(root->left);
        int right=depth(root->right);
        if(abs(left-right)>1)return -1e9;
        return max(left,right)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(!root)return 1;
        int left=depth(root->left);
        if(left<0)return 0;
        int right=depth(root->right);
        if(right<0)return 0;
        return abs(left-right)<=1;
    }
};