#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string getPermutation(int n, int k) {
        int divisor=1,i,j,tempindex;
        vector<bool> a(n,false);
        string result="",source="123456789";

        k--;
        for(i=2;i<n;i++)
            divisor*=i;

        for(i=n-1;i>0;i--){
            tempindex=k/divisor;
            for(j=0;j<n;j++){
                if(!a[j]){
                    tempindex--;
                    if(tempindex<0)
                        break;
                }
            }
            a[j]=true;
            result.append(1,source[j]);
            k%=divisor;
            divisor/=i;

        }
        for(j=0;j<n;j++){
            if(!a[j]){
                a[j]=true;
                result.append(1,source[j]);
                return result;
            }
        }
        return result;
    }
};

int main(void){
    int n=4,k=3;
    Solution my;

    cout<<my.getPermutation(n,k);
}
