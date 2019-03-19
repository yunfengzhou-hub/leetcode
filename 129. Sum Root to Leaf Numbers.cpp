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
    int total=0;
    void mySum(TreeNode* root,int currenttotal){
        currenttotal*=10;
        currenttotal+=root->val;
        if(root->left==NULL&&root->right==NULL){
            total+=currenttotal;
        }else{
            if(root->left!=NULL)
                mySum(root->left,currenttotal);
            if(root->right!=NULL)
                mySum(root->right,currenttotal);
        }

        /*if(root!=NULL){
            currenttotal*=10;
            currenttotal+=root->val;
            mySum(root->left,currenttotal);
            mySum(root->right,currenttotal);
        }else{
            total+=currenttotal;
        }*/
    }
    int sumNumbers(TreeNode* root) {
        if(root==NULL) return 0;
        mySum(root,0);
        return total;
    }
};
