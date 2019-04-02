#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;
        vector<int> s1,t1;
        int s2=0,t2=0,i,j;
        for(i=0;i<s.length();i++){
            for(j=0;j<i;j++){
                if(s[i]==s[j]){
                    s1.push_back(s1[j]);
                    break;
                }
            }
            if(s1.size()<i+1){
                s1.push_back(s2++);
            }
        }
        for(i=0;i<t.length();i++){
            for(j=0;j<i;j++){
                if(t[i]==t[j]){
                    t1.push_back(s1[j]);
                    break;
                }
            }
            if(t1.size()<i+1){
                t1.push_back(t2++);
            }
        }
        for(i=0;i<s1.size();i++){
            cout<<s1[i]<<' ';
        }cout<<endl;
        for(i=0;i<t1.size();i++){
            cout<<t1[i]<<' ';
        }cout<<endl;
        for(i=0;i<s1.size();i++){
            if(s1[i]!=t1[i])
                return false;
        }
        return true;
    }
};

int main(void){
    Solution my;
    cout<<my.isIsomorphic("addccccb","eggddddf");
}
