#include <iostream>
#include <math.h>

using namespace std;

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1) return false;
        while(n>1){
            if(n%3) return false;
            n/=3;
        }
        return true;
    }
};

int main(void){
    Solution my;
    cout<<my.isPowerOfThree(243)<<endl;
}
