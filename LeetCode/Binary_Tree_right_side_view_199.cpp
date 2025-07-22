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
    vector<vector<int>>tmp;
    void dfs(TreeNode* root,int dep){
        if(root==nullptr)return;
        if(tmp.size()==dep)tmp.push_back(vector<int>());
        tmp[dep].push_back(root->val);
        dfs(root->right,dep+1);
        dfs(root->left,dep+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        dfs(root,0);
        vector<int> ans;
        for(auto i:tmp){
            ans.push_back(i[0]);
        }
        return ans;
    }
};