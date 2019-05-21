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
    pair<int,int> myLoop(TreeNode* root){
        if(root==NULL) return make_pair(0,0);
        pair<int,int> leftresult=myLoop(root->left);
        pair<int,int> rightresult=myLoop(root->right);
        return make_pair(leftresult.second+rightresult.second+root->val,max(max(leftresult.first+rightresult.second,leftresult.second+rightresult.first),leftresult.first+rightresult.first));
    }
    int rob(TreeNode* root) {
        pair<int,int> result=myLoop(root);
        return result.first>result.second?result.first:result.second;
    }
};
