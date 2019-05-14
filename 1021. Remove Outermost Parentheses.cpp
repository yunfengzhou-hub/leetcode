class Solution {
public:
    string removeOuterParentheses(string S) {
        string result;
        int mystack=0;
        for(int i=0;i<S.length();i++){
            if(S[i]=='('){
                if(mystack!=0){
                    result+='(';
                }
                mystack++;
            }else{
                mystack--;
                if(mystack!=0){
                    result+=')';
                }
            }
        }
        return result;
    }
};
