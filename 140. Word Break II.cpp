#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

using namespace std;

class Solution {
public:
    vector<string> result;
    vector<string> mywordDict;
    vector<int> indexes;
    int top=0;
    void myBreak(string s){
        if(top>=s.length()){
            string temp="";
            for(int i=0;i<indexes.size()-1;i++){
                temp+=mywordDict[indexes[i]];
                temp+=' ';
            }
            temp+=mywordDict[indexes[indexes.size()-1]];
            result.push_back(temp);
            return;
        }
        for(int i=0;i<mywordDict.size();i++){
            if(s.length()-top>=mywordDict[i].length()&&s.compare(top,mywordDict[i].length(),mywordDict[i])==0){
                indexes.push_back(i);
                top+=mywordDict[i].length();
                myBreak(s);
                top-=mywordDict[i].length();
                indexes.pop_back();
            }
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        mywordDict.assign(wordDict.begin(),wordDict.end());
        myBreak(s);
        return result;
    }
};

int main(void){
    string s = "catsanddog";
    string wordList[5]= {"cat", "cats", "and", "sand", "dog"};
    vector<string> wordDict(wordList,wordList+5);
    Solution my;
    vector<string> result=my.wordBreak(s,wordDict);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
}
