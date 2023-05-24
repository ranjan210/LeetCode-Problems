class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root==0){
            return 0;
        }
        return max(dig(root->left,1),dig(root->right,1));
    }

    int dig(TreeNode* root,int d){
        int l,r;
        if(root == 0){
            return d;
        }
            l = dig(root->left,d+1);
            r = dig(root->right,d+1);
        return max(l,r);
    }
};