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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        if(head==NULL||head->next==NULL||m==n) return head;
        ListNode *temp=head,*end1,*end2;
        int i;
        temp=new ListNode(0);
        temp->next=head;
        head=temp;
        for(i=0;i<m-1;i++){
            temp=temp->next;
        }
        end1=temp;
        for(;i<n;i++){
            temp=temp->next;
        }
        end2=temp->next;
        temp->next=NULL;
        temp=end1->next;
        end1->next=NULL;
        temp=reverseList(temp);
        end1->next=temp;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=end2;
        return head->next;
    }
};
