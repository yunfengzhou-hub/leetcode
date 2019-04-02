#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        int i=13,a=~(m^n);
        /*for(int j=14;j>=0;j--){
            cout<<(a>>j)%2;
        }
        cout<<endl;*/
        while(i>=0&&(a>>i)%2!=0) i--;
        //cout<<i<<endl;
        if(i<0) return m;
        i++;
        a=a>>i;
        a=a<<i;
        return m&a;
    }
};

int main(void){
    Solution my;
    cout<<my.rangeBitwiseAnd(1,3)<<endl;
    return 0;
}
