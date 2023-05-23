class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root->left == 0 & root->right == 0){
            return true;
        }
        return compare(root->left,root->right);
    }
    bool compare(TreeNode* l,TreeNode* r){
        if(l == 0 && r == 0){
            return true;
        }
        if((l == 0 && r != 0) || (l !=0 && r == 0)){
            return false;
        }
        if(l->val != r-> val){
            return false;
        }
        return compare(l->left,r->right) && compare(l->right,r->left);

    }

};