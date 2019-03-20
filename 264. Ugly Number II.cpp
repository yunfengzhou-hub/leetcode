#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int nthUglyNumber(int n) {
        int t2=0,t3=0,t5=0,top=0;
        vector<int> num;
        num.push_back(1);
        while(top<n-1){
            num.push_back(min(num[t2]*2,min(num[t3]*3,num[t5]*5)));
            top++;
            //cout<<num[top]<<" ";
            if(num[top]==num[t2]*2) t2++;
            if(num[top]==num[t3]*3) t3++;
            if(num[top]==num[t5]*5) t5++;
        }
        return num[top];
    }
};


int main(void){
    Solution my;
    cout<<endl<<my.nthUglyNumber(10)<<endl;
}
