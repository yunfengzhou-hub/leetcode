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
    ListNode* reverseList(ListNode* head){
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
    void reorderList(ListNode* head) {
        if(head==NULL||head->next==NULL||head->next->next==NULL) return;
        int counter=0;
        ListNode *temp=head,*temp2,*head1,*end1;
        while(temp!=NULL){
            counter++;
            temp=temp->next;
        }
        counter=(counter+1)/2;
        temp=head;
        for(int i=1;i<counter;i++){
            temp=temp->next;
        }
        temp2=temp->next;
        temp->next=NULL;
        temp=temp2;
        end1=reverseList(temp);
        head1=head;
        while(end1!=NULL){
            temp=head1->next;
            temp2=end1->next;
            head1->next=end1;
            head1=temp;
            end1->next=head1;
            end1=temp2;
        }
    }
};
