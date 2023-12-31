/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        inOrder(root,res);
        return res;
    }

    void inOrder(TreeNode* root,vector<int> &res){
        if(root == 0){
            return;
        }
        if(root->left == 0 && root->right == 0){
            res.push_back(root->val);
        }
        else{
            
            inOrder(root->left,res);
            res.push_back(root->val);
            inOrder(root->right,res);
        }

    }
};