#include <bits/stdc++.h>
using namespace std;
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