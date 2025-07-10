class Solution {
public:
    int maxDiameter = 0;

    int height(TreeNode* root) {
        if (root == NULL) return 0;

        int left = height(root->left);
        int right = height(root->right);

        // Update the maximum diameter
        maxDiameter = max(maxDiameter, left + right);

        return 1 + max(left, right);
    }

    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return maxDiameter;
    }
};
