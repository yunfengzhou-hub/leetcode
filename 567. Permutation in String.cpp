#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    int s1num[26]={0};
    bool allZero(){
        for(int i=0;i<26;i++){
            if(s1num[i]!=0)
                return false;
        }return true;
    }
    bool checkInclusion(string s1, string s2) {
        if(s2.length()<s1.length()) return false;
        int i;
        for(i=0;i<s1.length();i++){
            s1num[s1[i]-'a']++;
        }
        for(i=0;i<s1.length();i++){
            s1num[s2[i]-'a']--;
        }
        if(allZero()) return true;
        for(i=s1.length();i<s2.length();i++){
            s1num[s2[i]-'a']--;
            s1num[s2[i-s1.length()]-'a']++;
            if(allZero()) return true;
        }return false;
    }
};

int main(void){
    Solution my;
    cout<<endl<<my.checkInclusion("a","eidboaoo")<<endl;
}
