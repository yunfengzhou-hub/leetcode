#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        if(n<3) return 0;
        bool isPrime[n];
        int i,j,counter=0;
        for(i=2;i<n;i++)
            isPrime[i]=true;
        for(i=2;i<n;i++){
            if(isPrime[i]){
                counter++;
                for(j=2*i;j<n;j+=i)
                    isPrime[j]=false;
            }
        }
        return counter;
    }
};

int main(void){
    Solution my;
    cout<<endl<<my.countPrimes(499979)<<endl;
}
