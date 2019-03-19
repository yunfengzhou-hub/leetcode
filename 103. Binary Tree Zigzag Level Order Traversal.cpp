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
    vector<vector<int>> result;
    int level=0;
    void searchLevel(TreeNode *root){
        if(root!=NULL){
            if(level>=result.size()){
                result.push_back({});
            }
            result[level].push_back(root->val);
            level++;
            searchLevel(root->left);
            searchLevel(root->right);
            level--;
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<int> temp;
        searchLevel(root);
        for(int i=1;i<result.size();i+=2){
            for(int j=0;j<result[i].size();j++){
                temp.push_back(result[i].pop_back());
                temp.copy(temp.begin(),temp.end(),result[i].begin());
            }
        }
        return result;
    }
};
