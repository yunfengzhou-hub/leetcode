#include <iostream>

using namespace std;

class Solution {
public:
    int numSquares(int n) {
        if(n<3) return n;
        int *nums,i,j,temp,root=2;
        nums=new int(n);
        nums[0]=1;
        nums[1]=2;
        for(i=2;i<n;i++){

            temp=nums[0]+nums[i-1];
            for(j=1;j<i/2+1;j++){
                temp=min(temp,nums[j]+nums[i-j-1]);
            }
            nums[i]=temp;
            if(i+1==root*root){
                nums[i]=1;
                root++;
                //cout<<endl;
            }
            cout<<nums[i]<<' ';
        }
        cout<<endl;
        return nums[n-1];
    }
};

int main(void){
    Solution my;
    cout<<my.numSquares(13)<<endl;
}
