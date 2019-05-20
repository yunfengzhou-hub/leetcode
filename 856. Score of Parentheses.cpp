#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*class Solution {
public:
    int scoreOfParentheses(string S) {
        S+='(';
        int index=0,i,j;
        vector<int> mystack;
        for(i=0;i<S.length();i++){
            if(S[i]=='('){
                if(!mystack.empty()){
                    j=mystack.size()-1;
                    if(j>0&&mystack[j]!=0&&mystack[j-1]!=0){
                        mystack[j-1]+=mystack[j];
                        mystack.pop_back();
                        j--;
                    }
                    if(index>0){
                        index--;
                        if(mystack[j]!=0)
                            mystack[j]*=(1<<index);
                        else
                            mystack.push_back(1<<index);
                    }
                    index=0;
                }
                mystack.push_back(0);
            }else{
                for(j=mystack.size()-1;j>=0;j--){
                    if(mystack[j]==0)
                        break;
                }
                mystack.erase(mystack.begin()+j,mystack.begin()+j+1);
                index++;
            }
            cout<<S[i]<<' '<<index<<' ';
            for(j=0;j<mystack.size();j++){
                cout<<mystack[i];
            }cout<<endl;
        }
        return mystack[0];
    }
};*/

class Solution {
public:
    int scoreOfParentheses(string S) {
        S+='(';
        int i,j;
        bool index=false;
        vector<int> mystack;
        for(i=0;i<S.length();i++){
            j=mystack.size()-1;
            if(index){
                if(mystack[j])
                mystack[j]<<=1;
                index=false;
            }
            if(j>0&&mystack[j]!=0&&mystack[j-1]!=0){
                mystack[j-1]+=mystack[j];
                mystack.pop_back();
            }
            if(S[i]=='('){
                mystack.push_back(0);
            }else{
                for(j=mystack.size()-1;j>=0;j--){
                    if(mystack[j]==0)
                        break;
                }
                mystack.erase(mystack.begin()+j,mystack.begin()+j+1);
                index=true;
            }
            cout<<S[i]<<' '<<index<<' ';
            for(j=0;j<mystack.size();j++){
                cout<<mystack[j];
            }cout<<endl;
        }
        cout<<mystack.size();
        return mystack[0];
    }
};

int main(void){
    Solution my;
    cout<<my.scoreOfParentheses("()");
}
