#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    /*int digitSquareSum(int n){
        int total=0;
        while(n>0){
            total+=(n%10)^2;
            n/=10;
        }
        return total;
    }*/
    bool isHappy(int n) {
        vector<int> possibles;
        int i,total;
        while(n>1){
            //cout<<n<<endl;
            total=0;
            while(n>0){
                total+=(n%10)*(n%10);
                n/=10;
            }
            for(i=0;i<possibles.size();i++){
                if(possibles[i]==total)
                    return false;
            }
            possibles.push_back(total);
            n=total;
        }
        return true;
    }
};

int main(void){
    Solution my;
    cout<<my.isHappy(18)<<endl;
}
