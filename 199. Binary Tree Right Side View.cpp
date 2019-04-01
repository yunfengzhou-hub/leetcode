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
    vector<int> right;
    void viewTree(TreeNode* root, int level){
        if(right.size()<=level){
            right.push_back(root->val);
        }else{
            right[level]=root->val;
        }
        if(root->left!=NULL){
            viewTree(root->left, level+1);
        }
        if(root->right!=NULL){
            viewTree(root->right, level+1);
        }
    }
    vector<int> rightSideView(TreeNode* root) {
        if(root!=NULL){
            viewTree(root,0);
        }
        return right;
    }
};
