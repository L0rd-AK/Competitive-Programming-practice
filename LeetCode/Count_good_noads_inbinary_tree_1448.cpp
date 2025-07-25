
#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int ans = 0;

    void dfs(TreeNode* node, int maxSoFar) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        if (node == nullptr) return;

        if (node->val >= maxSoFar) {
            ans++;
        }

        maxSoFar = max(maxSoFar, node->val);
        dfs(node->left, maxSoFar);
        dfs(node->right, maxSoFar);
    }

    int goodNodes(TreeNode* root) {
        if (root == nullptr) return 0;
        dfs(root, root->val);
        return ans;
    }
};
