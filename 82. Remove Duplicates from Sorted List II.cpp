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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        int dup;
        ListNode* temp,*temp2;
        temp=new ListNode(head->val/2-1);
        temp->next=head;
        head=temp;
        temp2=temp->next;
        while(temp2!=NULL&&temp2->next!=NULL){
            if(temp2->val==temp2->next->val){
                dup=temp2->val;
                while(temp2!=NULL&&temp2->val==dup){
                    temp2=temp2->next;
                }
                temp->next=temp2;
                if(temp2==NULL) break;
            }else{
                temp=temp->next;
                temp2=temp2->next;
            }

        }
        return head->next;
    }
};
