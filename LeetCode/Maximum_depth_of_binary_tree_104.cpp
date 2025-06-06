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
        int func(TreeNode* root){
            if(root==NULL){
                return 0;
            }
            int maxLeft = func(root->left);
            int maxRight = func(root->right);
            return max(maxLeft, maxRight)+1;
    
        }
        int maxDepth(TreeNode* root) {
            return func(root);
        }
    };