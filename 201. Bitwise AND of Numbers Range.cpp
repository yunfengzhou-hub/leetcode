#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
        /*int a=m&n,i,j;
        vector<int> bits;
        for(i=0;i<15;i++){
            m=m>>1;
            if(m==0)
                break;

        }
        j=i;
        //cout<<j<<endl;
        for(i=0;i<15;i++){
            n=n>>1;
            if(n==0)
                break;

        }
        j=max(j,i);
        //cout<<j<<endl;
        for(i=0;i<15;i++){
            bits.push_back(a%2);
            a=a>>1;
        }
        for(i=0;i<15;i++){
            cout<<bits[i];
        }cout<<endl;
        for(i=j;i>0;i--){
            bits[i-1]&=bits[i];

        }
        for(i=0;i<15;i++){
            cout<<bits[i];
        }cout<<endl;
        //cout<<j;
        for(i=14;i>=0;i--){
            a=a<<1;
            a+=bits[i];
        }
        return a;*/
        int i=15;
        while(i>=0&&(m>>i)==(n>>i)) i--;
        i++;
        m=m>>i;
        m=m<<i;
        return m;
    }
};

int main(void){
    Solution my;
    cout<<my.rangeBitwiseAnd(7,5)<<endl;
    return 0;
}
