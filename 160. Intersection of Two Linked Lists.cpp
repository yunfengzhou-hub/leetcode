#include <vector>
#include <stdlib.h>

using namespace std;

/**
 * Definition for singly-linked list. */
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    /*ListNode* reverseNode(ListNode* head){
        ListNode *p1,*p2,*p3;
        if(head=NULL||head->next==NULL)
            return head;
        if(head->next->next==NULL){
            p1=head;
            p2=p1->next;
            p1->next=NULL;
            p2->next=p1;
            return p2;
        }


        p1=head;
        p2=p1->next;
        p3=p2->next;

        p1->next=NULL;
        while(p3!=NULL){
            p2->next=p1;
            p1=p2;
            p2=p3;
            p3=p3->next;
        }
        p2->next=p1;

        return p2;
    }*/
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        /*vector<ListNode*> stackA,stackB;
        int topA,topB;

        while(headA!=NULL){
            stackA.push_back(headA);
            headA=headA->next;
        }

        while(headB!=NULL){
            stackB.push_back(headB);
            headB=headB->next;
        }

        topA=stackA.size()-1;
        topB=stackB.size()-1;

        if(stackA[topA]!=stackB[topB])
            return NULL;
        while(topA>=0&&topB>=0){
            if(stackA[topA]!=stackB[topB])
                break;
            topA--;
            topB--;
        }
        if(topA>=0&&topB>=0)
            return stackA[topA];
        else if(topA<0)
            return stackA[0];
        else if(topB<0)
            return stackB[0];*/
        int numA=0,numB=0,i,j;
        ListNode* headA1=headA,headB1=headB;
        ListNode** headA2,headB2;
        while(headA1!=NULL){
            numA++;
            headA1=headA1->next;
        }
        while(headB1!=NULL){
            numB++;
            headB1=headB1->next;
        }
        headA2=new ListNode*(numA);
        headB2=new ListNode*(numB);
        headA1=headA;
        headB1=headB;
        for(i=0;i<numA;i++){
            headA2[i]=headA1;
            headA1=headA1->next;
        }
        for(i=0;i<numB;i++){
            headB2[i]=headB1;
            headB1=headB1->next;
        }
        i=numA-1;
        j=numB-1;
        while(i>=0&&j>=0&&headA2[i]==headB2[j]){
            i--;
            j--;
        }
        if(i==numA-1)
            return NULL;
        else
            return headA2[i+1];
    }
};

int main(void){
    return 0;
}
