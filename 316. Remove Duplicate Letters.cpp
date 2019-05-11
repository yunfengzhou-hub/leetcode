#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    /*string myRemove(string s,vector<bool> letter){
        if(s.length()<1) return "";

        int i,j,k;
        for(i=0;i<26;i++){
            if(letter[i]){
                break;
            }
        }
        if(i>25) return "";
        for(j=0;j<s.length();j++){
            if(s[j]==i+97)
                break;
        }
        vector<bool> left(26,false),right(26,false);
        for(k=0;k<j;k++){
            left[s[k]-97]=true;
        }
        for(k=j+1;k<s.length();k++){
            right[s[k]-97]=true;
        }
        for(k=0;k<26;k++){
            if(right[k])
                left[k]=false;
        }
        left[s[j]-97]=false;
        right[s[j]-97]=false;
        cout<<s[j]<<' '<<s<<endl;
        return myRemove(s.substr(0,j),left)+s[j]+myRemove(s.substr(j+1,s.length()-j-1),right);
    }*/

    string removeDuplicateLetters(string s) {
        /*vector<bool> letter(26,false);
        for(int i=0;i<s.length();i++){
            letter[s[i]-97]=true;
        }
        return myRemove(s,letter);*/
        //cout<<s<<endl;
        if(s=="") return "";
        int i,pos=0;
        vector<int> letter(26,0);
        for(i=0;i<s.length();i++){
            letter[s[i]-'a']++;
        }
        for(i=0;i<s.length();i++){
            if(s[i]<s[pos]) pos=i;
            if(--letter[s[i]-'a']==0) break;
        }
        string s1=s.substr(pos+1);
        i=0;
        while(i<s1.length()){
            if(s1[i]==s[pos])
                s1=s1.erase(i,1);
            else
                i++;
        }
        return s[pos]+removeDuplicateLetters(s1);
    }
};


int main(void){
    Solution my;
    cout<<my.removeDuplicateLetters("cbacdcbc");
}
