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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL) return NULL;
        ListNode *result=NULL,*temp=head->next;
        while(temp!=NULL){
            head->next=result;
            result=head;
            head=temp;
            temp=temp->next;
        }
        head->next=result;
        return head;
    }
};
