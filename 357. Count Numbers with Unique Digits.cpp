#include <iostream>

using namespace std;

class Solution {
public:
    int prod[11]={0,1,2,6,24,120,720,5040,40320,362880,3628800};
    /*int myloop(int n){
        if(n<1) return 0;
        n=min(n,10);
        cout<<prod[9]/prod[9-n]+prod[9]/prod[10-n]<<' ';
        return prod[9]/prod[9-n]+prod[9]/prod[10-n]+myloop(n-1);
    }*/
    int countNumbersWithUniqueDigits(int n) {
        if(n<1) return 1;
        n=min(n,10);
        int result=0;
        for(int i=n;i>0;i--){
            result+=prod[10]/prod[10-i]/10*9;
        }
        return result+1;
    }
};

int main(void){
    Solution my;
    cout<<endl<<my.countNumbersWithUniqueDigits(1)<<endl;
}
