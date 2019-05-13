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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL||head->next==NULL) return head;
        ListNode *smallend,*bigstart,*bigend,*temp,*head2;
        head2=new ListNode(x-1);
        head2->next=head;
        smallend=head2;
        bigstart=head;
        bigend=head;
        while(smallend->next!=NULL&&smallend->next->val<x){
            smallend=smallend->next;
        }bigstart=smallend->next;
        bigend=bigstart;
        while(bigend!=NULL){
            //cout<<smallend->val;
            while(bigend->next!=NULL&&bigend->next->val>=x){
                bigend=bigend->next;
            }
            if(bigend->next==NULL) break;
            temp=bigend->next->next;
            bigend->next->next=bigstart;
            smallend->next=bigend->next;
            bigend->next=temp;
            //bigend=bigend->next;
            smallend=smallend->next;
        }
        return head2->next;
    }
};
