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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverseList(l1);
        l2=reverseList(l2);
        int counter=0;
        ListNode *result,*head;
        result=new ListNode(0);
        head=result;
        while(l1!=NULL&&l2!=NULL){
            counter=counter+l1->val+l2->val;
            result->next=new ListNode(counter%10);
            result=result->next;
            counter/=10;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            counter=counter+l1->val;
            result->next=new ListNode(counter%10);
            result=result->next;
            counter/=10;
            l1=l1->next;
        }
        while(l2!=NULL){
            counter=counter+l2->val;
            result->next=new ListNode(counter%10);
            result=result->next;
            counter/=10;
            l2=l2->next;
        }
        if(counter!=0){
            result->next=new ListNode(counter%10);
        }
        head=reverseList(head->next);
        return head;
    }
};
