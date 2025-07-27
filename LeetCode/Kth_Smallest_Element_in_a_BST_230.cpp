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
    vector<int> ans;
    void dfs(TreeNode* root){
        if(root==nullptr)return;
        ans.push_back(root->val);
        if(root->left)dfs(root->left);
        if(root->right)dfs(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
        dfs(root);
        sort(ans.begin(),ans.end());
        return ans[k-1];
    }
};