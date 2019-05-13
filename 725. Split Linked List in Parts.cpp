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
    vector<ListNode*> splitListToParts(ListNode* root, int k) {
        int lislen=0,i,j;
        ListNode *temp,*temp2;
        vector<ListNode*> result(k,NULL);
        temp=root;
        while(temp!=NULL){
            lislen++;
            temp=temp->next;
        }
        temp=root;
        if(lislen/k==0){
            if(lislen==0) return result;
            for(i=0;i<k;i++){
                result[i]=temp;
                temp2=temp->next;
                temp->next=NULL;
                temp=temp2;
                if(temp==NULL)
                    break;
            }
        }else{
            for(i=0;i<k;i++){
                //cout<<i;
                result[i]=temp;
                for(j=1;j<lislen/k;j++){
                    temp=temp->next;
                }if(i<lislen%k){
                    temp=temp->next;
                }
                temp2=temp->next;
                temp->next=NULL;
                temp=temp2;
                /*if(temp==NULL)
                    break;*/
            }
        }

        return result;
    }
};
