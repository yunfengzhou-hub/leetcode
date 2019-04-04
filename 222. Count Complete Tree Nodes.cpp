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
    TreeNode* findNode(TreeNode* head,int modder, int middle){
        while(modder>0){
            if(middle/modder==0)
                head=head->left;
            else
                head=head->right;
            middle%=modder;
            modder/=2;
        }
        return head;
    }

    int countNodes(TreeNode* root) {
        TreeNode* head=root;
        int level=0;
        while(head!=NULL){
            head=head->left;
            level++;
        }
        if(level<2) return root!=NULL;
        level--;

        int start,finish,middle,modder;
        start=0;
        finish=pow(2,level)-1;
        while(finish-start>1){
            middle=(start+finish)/2;
            if(findNode(root,pow(2,level-1),middle)==NULL)
                finish=middle;
            else
                start=middle;
        }
        //cout<<start<<' '<<finish;
        if(findNode(root,pow(2,level-1),start)==NULL)
            return pow(2,level)-1+start;
        else if(findNode(root,pow(2,level-1),finish)==NULL)
            return pow(2,level)-1+start+1;
        else
            return pow(2,level)-1+start+2;
    }
};
