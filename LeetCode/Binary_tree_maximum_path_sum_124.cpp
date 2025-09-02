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
    
    int dfs(TreeNode* root,int& ans){
        if(!root)return 0;
        int left=max(dfs(root->left,ans),0);
        int right=max(dfs(root->right,ans),0);
        ans=max(ans,root->val+left+right);
        return root->val+max(left,right);
    }
    int maxPathSum(TreeNode* root) {
        if(!root)return 0;
        int ans=root->val;
        dfs(root,ans);
        return ans;
    }
};

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int maxDepth(TreeNode* root, int& ans) {

        if(root == NULL){
            return 0;
        }   

        int leftt = maxDepth(root->left, ans);
        int rightt = maxDepth(root->right, ans);

        if(leftt < 0){
            leftt = 0;
        }
        if(rightt < 0){
            rightt = 0;
        }

        ans = max(ans, leftt + rightt + root->val);

        return max(leftt + root->val, rightt + root->val);
    }

    int maxPathSum(TreeNode* root) {

        int ans = INT_MIN;
        maxDepth(root, ans);
        root->left = nullptr;
        root->right = nullptr;
        root = nullptr;
        return ans;
        
    }
};