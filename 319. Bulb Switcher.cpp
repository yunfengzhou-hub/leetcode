#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int bulbSwitch(int n) {
        vector<bool> bulbs(n,0);
        int i,j;
        for(i=1;i<=n;i++){
            for(j=i-1;j<n;j+=i){
                bulbs[j]=!bulbs[j];
            }
        }
        j=0;
        for(i=0;i<n;i++){
            if(bulbs[i])
                j++;
        }
        return j;
    }
};

int main(void){
    Solution my;
    for(int i=1;i<200;i++){
        cout<<i<<' '<<my.bulbSwitch(i)<<endl;
    }
}
