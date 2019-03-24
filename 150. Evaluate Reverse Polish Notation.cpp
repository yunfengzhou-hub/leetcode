#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int top=0,j,temp;
        bool sign;
        //cout<<tokens.size();

        vector<int> result;

        for(int i=0;i<tokens.size();i++){
            //cout<<tokens[i].length()<<endl;
            switch(tokens[i][0]){

            case '+':
                result[top-2]+=result[top-1];
                result.pop_back();
                top--;
                break;
            case '-':
                result[top-2]-=result[top-1];
                result.pop_back();
                top--;
                break;
            case '*':
                result[top-2]*=result[top-1];
                result.pop_back();
                top--;
                break;
            case '/':
                result[top-2]/=result[top-1];
                result.pop_back();
                top--;
                break;
            default:
                temp=0;
                sign=false;
                for(j=0;j<tokens[i].length();j++){
                    if(tokens[i][j]=='-'){
                        sign=true;
                        continue;
                    }
                    temp*=10;
                    temp+=(tokens[i][j]-48);
                    //cout<<temp<<endl;
                }
                if(sign){
                    temp=-temp;
                }
                result.push_back(temp);
                top++;
            }
            /*for(int k=0;k<result.size();k++){
                cout<<result[k]<<' ';
            }
            cout<<endl;*/
        }
        return result[0];
    }
};

int main(void){
    Solution my;
    vector<string> input;
    //["10","6","9","3","+","-11","*","/","*","17","+","5","+"]
    input.push_back("10");
    input.push_back("6");
    input.push_back("9");
    input.push_back("3");
    input.push_back("+");
    input.push_back("-11");
    input.push_back("*");
    input.push_back("/");
    input.push_back("*");
    input.push_back("17");
    input.push_back("+");
    input.push_back("5");
    input.push_back("+");

    cout<<my.evalRPN(input);
    return 0;
}
