/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class BSTIterator {
public:
    vector<TreeNode*> mystack;
    BSTIterator(TreeNode* root) {
        while(root!=NULL){
            mystack.push_back(root);
            root=root->left;
        }
    }

    /** @return the next smallest number */
    int next() {
        TreeNode* result,*temp;
        result=mystack.back();
        temp=result->right;
        mystack.pop_back();
        while(temp!=NULL){
            mystack.push_back(temp);
            temp=temp->left;
        }
        return result->val;
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        return mystack.size()!=0;
    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
