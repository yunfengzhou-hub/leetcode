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
    TreeNode* result;
    vector<int>& gnums
    void myBST(TreeNode* target,int start,int finish){
        //if(finish-start<1) return;
        target->val=gnums[(finish+start)/2];
        if((finish+start)/2-start>=1){
            target->left=new TreeNode(gnums[0]);
            myBST(target->left,start,(finish+start)/2);
        }
        if(finish-(finish+start)/2>=1){
            target->right=new TreeNode(gnums[0]);
            myBST(target->right,(finish+start)/2,finish);
        }
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()<1) return NULL;
        gnums.assign(nums.begin(),nums.end());
        result=new TreeNode(gnums[0]);
        myBST(result,0,nums.size());
        return result;
    }
};
