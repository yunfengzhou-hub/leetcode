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
    ListNode* oddEvenList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode *oddend,*evenstart,*evenend,*temp;
        oddend=head;
        evenstart=head->next;
        evenend=evenstart;
        while(evenend!=NULL&&evenend->next!=NULL){
            temp=evenend->next->next;
            oddend->next=evenend->next;
            evenend->next->next=evenstart;
            evenend->next=temp;
            evenend=evenend->next;
            oddend=oddend->next;
        }
        return head;
    }
};
