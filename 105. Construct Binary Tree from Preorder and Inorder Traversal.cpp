#include <vector>
#include <stdlib.h>

using namespace std;


//Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    void myBuildTree(vector<int>& preorder, vector<int>& inorder, TreeNode* result){
        int i,j,k;
        if(preorder.size()<1) return;
        for(i=0;i<inorder.size();i++){
            if(inorder[i]==preorder[0]) break;
        }
        result->val=inorder[i];
        result->left=new TreeNode(inorder[i]);
        result->right=new TreeNode(inorder[i]);

        vector<int> preorderleft,preorderright;
        for(j=1;j<preorder.size();j++){
            for(k=0;k<i;k++){
                if(inorder[k]==preorder[j]){
                    preorderleft.push_back(inorder[k]);
                    break;
                }
            }
        }
        for(j=1;j<preorder.size();j++){
            for(k=i+1;k<inorder.size();k++){
                if(inorder[k]==preorder[j]){
                    preorderright.push_back(inorder[k]);
                    break;
                }
            }
        }
        vector<int> inorderleft(inorder.begin(),inorder.begin()+i);
        vector<int> inorderright(inorder.begin()+i+1,inorder.end());

        myBuildTree(preorderleft,inorderleft,result->left);
        myBuildTree(preorderright,inorderright,result->right);

        if(result->left->val==result->val){
            delete result->left;
            result->left=NULL;
        }

        if(result->right->val==result->val)
            delete result->right;
            result->right=NULL;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        if(preorder.size()<1) return NULL;
        TreeNode* result;
        result=new TreeNode(preorder[0]);
        myBuildTree(preorder,inorder,result);
        return result;
    }
};
