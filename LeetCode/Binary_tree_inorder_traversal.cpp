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
        void inOrder(TreeNode* root, vector<int>& res) {
            if (root != NULL) {
                inOrder(root->left, res);
                res.push_back(root->val);
                inOrder(root->right, res);
            }
        }
        vector<int> inorderTraversal(TreeNode* root) {
            vector<int> ans;
            inOrder(root,ans);
            return ans;
        }
    };