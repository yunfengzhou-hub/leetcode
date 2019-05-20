/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> value;
        while(head!=NULL){
            value.push_back(head->val);
            head=head->next;
        }
        vector<int> result(value.size(),0);
        int i,j,temp;
        for(i=value.size()-2;i>=0;i--){
            j=i+1;
            while(true){
                if(value[j]>value[i]){
                    result[i]=value[j];
                    break;
                }if(result[j]==0){
                    result[i]=0;
                    break;
                }
                temp=result[j];
                for(;j<value.size();j++){
                    if(value[j]==temp)
                        break;
                }
            }
        }
        return result;
    }
};
