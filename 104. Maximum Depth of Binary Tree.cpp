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
    int maxDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        queue<TreeNode*> myqueue;
        queue<int> mylevel;
        int currentlevel;
        myqueue.push(root);
        mylevel.push(1);
        while(myqueue.size()>0){
            currentlevel=mylevel.front();
            if(myqueue.front()->left!=NULL){
                myqueue.push(myqueue.front()->left);
                mylevel.push(currentlevel+1);
            }
            if(myqueue.front()->right!=NULL){
                myqueue.push(myqueue.front()->right);
                mylevel.push(currentlevel+1);
            }
            myqueue.pop();
            mylevel.pop();
        }
        return currentlevel;
    }
};
