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
    bool belongtome(TreeNode* root, TreeNode* p){
        if(root==NULL) return false;
        return root==p||belongtome(root->left,p)||belongtome(root->right,p);
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        if(root==p||root==q) return root;
        if((belongtome(root->left,p)&&belongtome(root->right,q))||(belongtome(root->left,q)&&belongtome(root->right,p)))
            return root;
        TreeNode* temp;
        if(temp=lowestCommonAncestor(root->left,p,q))
            return temp;
        else if(temp=lowestCommonAncestor(root->right,p,q))
            return temp;
        return NULL;
    }
};
