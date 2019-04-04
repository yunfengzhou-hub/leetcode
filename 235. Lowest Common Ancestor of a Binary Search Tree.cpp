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

    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p1, TreeNode* q1) {
        TreeNode *head;
        int p,q;
        head=root;
        if(p1->val>q1->val){
            p=q1->val;
            q=p1->val;
        }else{
            p=p1->val;
            q=q1->val;
        }
        while(true){
            if(p>root->val)
                root=root->right;
            else if(q<root->val)
                root=root->left;
            else break;
        }
        return root;
    }
};
