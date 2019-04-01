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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* pt;
        while(head!=NULL&&head->val==val)
            head=head->next;
        if(head==NULL) return head;
        pt=head;
        while(pt->next!=NULL){
            if(pt->next->val==val){
                pt->next=pt->next->next;
            }else{
                pt=pt->next;
            }
        }
        return head;
    }
};
