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
    bool hasCycle(ListNode *head) {
        vector<ListNode*> address;
        int i;
        while(head!=NULL){
            for(i=0;i<address.size();i++){
                if(address[i]==head){
                    return true;
                }
            }
            address.push_back(head);
            head=head->next;
        }
        return false;
    }
};
