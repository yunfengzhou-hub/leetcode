#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(string a, string b){
    if(a.length()<b.length()) return true;
    if(a.length()==b.length()){
        for(int i=0;i<a.length();i++){
            if(a[i]<b[i]) return true;
            if(a[i]>b[i]) return false;
        }
    }return false;
}

class Solution {
public:
    string replaceWords(vector<string>& dict, string sentence) {
        sort(dict.begin(),dict.end(),cmp);
        string::iterator s1=sentence.begin(),s2,s3;
        vector<string>::iterator v1;
        while(s1!=sentence.end()){
            while(s1!=sentence.end()&&*s1==' ')
                s1++;
            if(s1==sentence.end()) break;
            s2=s1+1;
            while(s2!=sentence.end()&&*s2!=' ')
                s2++;
            v1=dict.begin();
            while(v1!=dict.end()){
                s3=s1;
                while(s3+(*v1).length()<s2){
                    if(sentence())
                }
                v1++;
            }
        }
    }
};

int main(void){
    vector<string> dict;
    string sentence="hahaha";
    Solution my;
    dict.push_back("ccc");
    dict.push_back("bbb");
    dict.push_back("aaa");
    my.replaceWords(dict,sentence);
    for(int i=0;i<dict.size();i++){
        cout<<dict[i]<<' ';
    }cout<<endl;
}
