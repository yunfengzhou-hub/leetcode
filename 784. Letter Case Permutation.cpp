class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> result;
        vector<int> letter;
        int i,j,top=-1;
        for(i=S.length();i>=0;i--){
            if(S[i]>='A'&&S[i]<='Z'){
                S[i]-='A'-'a';
            }
        }
        for(i=S.length();i>=0;i--){
            if(S[i]>='a'&&S[i]<='z'){
                letter.push_back(i);
            }
        }
        for(i=0;i<pow(2,letter.size());i++){
            result.push_back(S);
            top++;
            for(j=0;j<letter.size();j++){
                if((i>>j)&1){
                    result[top][letter[j]]+='A'-'a';
                }
            }
        }
        return result;
    }
};
