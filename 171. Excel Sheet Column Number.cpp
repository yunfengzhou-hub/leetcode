class Solution {
public:
    int titleToNumber(string s) {
        int n=0,i;
        for(i=0;i<s.length();i++){
            n*=26;
            n+=s[i]-64;
        }
        return n;
    }
};
