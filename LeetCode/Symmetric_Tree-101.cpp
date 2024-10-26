
class Solution {
public:
    bool is_symmetry(TreeNode *l,TreeNode *r){
        if(l==NULL && r==NULL)return true;
        if(l==NULL || r==NULL)return false;
        
        return (l->val==r->val) && is_symmetry(l->left,r->right) && is_symmetry(l->right,r->left);
        
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        return is_symmetry(root->left,root->right);
    }
};