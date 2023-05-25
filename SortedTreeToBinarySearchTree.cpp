class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int n = nums.size();
        int mid = n/2;
        TreeNode* root = new TreeNode();
        root->val = nums[mid];
        if(n==1){
            return root;
        }
        if(n==2){
            root->left = new TreeNode(nums[0]);
            return root;
        }

        if(n==3){
            root->left = new TreeNode(nums[0]);
            root->right = new TreeNode(nums[2]);
            return root;
        }
        root->left = getSubTree(0,mid-1,nums);
        root->right = getSubTree(mid+1,n-1,nums);
        return root;
    }
    TreeNode* getSubTree(int l,int r,vector<int>& nums){
        TreeNode* root = new TreeNode();
        int mid = (l+r)/2;
        if(l<=r){
        if(r==l){
            return new TreeNode(nums[l]);
        }
        if(r-l==1){
            TreeNode* left = new TreeNode();
            root->val = nums[r];
            left->val = nums[l];
            root->left = left;
        }
        if(r-l==2){
            TreeNode* left = new TreeNode();
            TreeNode* right = new TreeNode();
            root->left = left;
            root->right = right;
            root->val = nums[r-1];
            left->val = nums[l];
            right->val = nums[r];
        }
        if(r-l>2){
            root->val = nums[(l+r)/2];
            root->left = getSubTree(l,((l+r)/2)-1,nums);
            root->right = getSubTree(((l+r)/2)+1,r,nums);
        }
        }

        return root;
    }
};