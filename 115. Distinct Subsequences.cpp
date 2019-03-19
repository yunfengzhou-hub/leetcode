#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int numDistinct(string s, string t) {
        vector<long> nums(t.length(),0);
        int i,j,k;
        for(i=0;i<s.length();i++){

            for(j=t.length()-1;j>0;j--){
                if(s[i]==t[j]){
                    nums[j]+=nums[j-1];
                }
            }
            if(s[i]==t[0]){
                nums[0]++;
            }
            /*for(k=0;k<nums.size();k++)
                cout<<nums[k]<<" ";
            cout<<endl;*/
        }
        /*for(i=0;i<nums.size();i++)
            cout<<nums[i]<<" ";
        cout<<endl;*/
        return int(nums[nums.size()-1]);
    }
};

int main(void){
    string s="ddd";
    string t="dd";
    Solution num;
    cout<<num.numDistinct(s,t)<<endl;
}
