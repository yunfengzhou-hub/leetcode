#include <iostream>

using namespace std;

void swap_with_zero(int* myarray, int len, int n){
    int i,j;
    for(i=0;i<len;i++){
        if(myarray[i]==0)
            break;
    }
    for(j=0;j<len;j++){
        if(myarray[j]==n)
            break;
    }
    int temp=myarray[i];
    myarray[i]=myarray[j];
    myarray[j]=temp;
}

class Solution {
public:
    /**
     * 调用方法swap_with_zero来对array进行排序
     */
    void myswap(int* myarray, int len, int n1, int n2){
        if(n1==n2)
            return;
        if(n1!=0 && n2!=0){
            swap_with_zero(myarray,len,n1);
            swap_with_zero(myarray,len,n2);
            swap_with_zero(myarray,len,n1);
        }
        else{
            swap_with_zero(myarray,len,n1);
            swap_with_zero(myarray,len,n2);
        }
    }
    void mysort(int* oriarray,int orilen,int* myarray, int len){
        if(len<2) return;
        /*for(int i=0;i<len;i++){
                cout<<myarray[i];
            }cout<<endl;*/
        int target,start,finish;
        target=myarray[0];
        start=1;
        finish=len-1;
        while(start<finish){
            /*for(int i=0;i<len;i++){
                cout<<myarray[i];
            }cout<<endl;*/

            while(start<finish && myarray[start]<=target)
                start++;
            while(start<finish && myarray[finish]>=target)
                finish--;
            //cout<<myarray[start]<<' '<<myarray[finish]<<len<<endl;
            if(start<finish)
                myswap(oriarray,orilen,myarray[start],myarray[finish]);
        }

        if(myarray[finish]>target)
            finish--;
        //cout<<myarray[finish]<<target<<endl;

        myswap(oriarray,orilen,myarray[0],myarray[finish]);
        mysort(oriarray,orilen,myarray,finish);
        mysort(oriarray,orilen,myarray+finish+1,len-finish-1);
    }
    void sort(int* myarray, int len) {
        mysort(myarray,len,myarray,len);
    }
};

int main(void){
    Solution my;
    int myarray[10]={1,2,5,4,7,9,6,8,0,3};
    my.sort(myarray,10);
    for(int i=0;i<10;i++){
        cout<<myarray[i]<<' ';
    }
}
