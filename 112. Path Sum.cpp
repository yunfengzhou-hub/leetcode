/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool mySum(TreeNode* root, int sum){
        if(root==NULL){
            return sum==0;
        }
        return mySum(root->left,sum-root->val)||hasPathSum(root->right,sum-root->val);
    }
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL){
            return false;
        }
        if(root->left!=NULL&root->right!=NULL){
            return hasPathSum(root->left,sum-root->val)||hasPathSum(root->right,sum-root->val);
        }else if(root->left!=NULL&root->right==NULL){
            return hasPathSum(root->left,sum-root->val);
        }else if(root->left==NULL&root->right!=NULL){
            return hasPathSum(root->right,sum-root->val);
        }else{
            return sum==root->val;
        }

    }
};
