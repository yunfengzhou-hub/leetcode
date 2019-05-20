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
    ListNode* middleNode(ListNode* slow) {
        if(slow==NULL||slow->next==NULL) return slow;
        ListNode *fast=slow;
        while(true){
            slow=slow->next;
            fast=fast->next;
            if(fast->next==NULL) break;
            fast=fast->next;
            if(fast->next==NULL) break;
        }
        return slow;
    }
};
