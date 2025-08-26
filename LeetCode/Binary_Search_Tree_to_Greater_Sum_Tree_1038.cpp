
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
    int sum=0;
    void travers(TreeNode* root) {
        if(root){
            travers(root->right);
            sum+=root->val;
            root->val=sum;
            travers(root->left);
        }
    }
    TreeNode* bstToGst(TreeNode* root) {
        travers(root);
        return root;
    }
};