class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i,j=0;
        bool found=true;
        for(i=0;i<s.length();i++){
            found=false;
            if(j>=t.length()) break;
            for(;j<t.length();j++){
                if(t[j]==s[i]){
                    j++;
                    found=true;
                    break;
                }
            }
        }
        //cout<<i;
        return found&&j<t.length()+1&&i>=s.length();
    }
};
