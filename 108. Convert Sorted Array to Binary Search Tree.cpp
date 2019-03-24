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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        int middle,start,finish;
        TreeNode* result,*temp;
        queue<TreeNode*> nodes;
        queue<pair<int,int>> ranges;

        if(nums.size()<1) return NULL;

        result=new TreeNode(0);
        nodes.push(result);
        ranges.push(make_pair(0,nums.size()));
        while(nodes.size()>0){
            start=ranges.front().first;
            finish=ranges.front().second;
            temp=nodes.front();

            middle=(start+finish)/2;
            temp->val=nums[middle];

            if(middle-start>0){
                temp->left=new TreeNode(0);
                nodes.push(temp->left);
                ranges.push(make_pair(start,middle));
            }
            if(finish-middle>1){
                temp->right=new TreeNode(0);
                nodes.push(temp->right);
                ranges.push(make_pair(middle+1,finish));
            }

            nodes.pop();
            ranges.pop();
        }

        return result;
    }
};
