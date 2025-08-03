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
    int idx = 0;

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int start, int end) {
        if (start > end) return nullptr;

        int rootVal = preorder[idx++];
        TreeNode* root = new TreeNode(rootVal);

        // Find root in inorder
        int i = start;
        for (; i <= end; ++i) {
            if (inorder[i] == rootVal) break;
        }

        // Build left and right subtrees
        root->left = solve(preorder, inorder, start, i - 1);
        root->right = solve(preorder, inorder, i + 1, end);

        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n = preorder.size();
        return solve(preorder, inorder, 0, n - 1);
    }
};
