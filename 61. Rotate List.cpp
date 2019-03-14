//Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* start,*finish;
        int i,listnum=1;
        start=head;
        while(start->next!=NULL){
            listnum++;
            start=start->next;
        }
        start->next=head;
        k%=listnum;
        for(i=0;i<=listnum-k;i++){
            start=start->next;
        }
        finish=head;
        for(i=0;i<listnum-k;i++){
            finish=finish->next;
        }
        finish->next=NULL;
        return start;
    }
};
