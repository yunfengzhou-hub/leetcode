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
    vector<string> result;
    void myLoop(TreeNode* root,string temp){
        temp+=to_string(root->val);
        if(root->left==NULL){
            if(root->right==NULL){
                result.push_back(temp);
            }else{
                temp+="->";
                myLoop(root->right,temp);
            }
        }else{
            temp+="->";
            myLoop(root->left,temp);
            if(root->right!=NULL){
                myLoop(root->right,temp);
            }
        }

    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root!=NULL)
            myLoop(root,"");
        return result;
    }
};
