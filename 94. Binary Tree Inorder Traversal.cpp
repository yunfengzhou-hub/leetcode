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
    vector<int> result;
    void myLoop(TreeNode* root){
        if(root==NULL)  return;
        myLoop(root->left);
        result.push_back(root->val);
        myLoop(root->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        myLoop(root);
        return result;
    }
};
