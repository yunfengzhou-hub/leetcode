class Solution {
public:
    string getHint(string s, string t) {
        vector<int> sletter(10,0),tletter(10,0);
        int i,bulls=0,cows=0;
        string result;
        for(i=0;i<s.length();i++){
            sletter[s[i]-48]++;
        }
        for(i=0;i<t.length();i++){
            tletter[t[i]-48]++;
        }
        for(i=0;i<s.length();i++){
            bulls+=(s[i]==t[i]);
        }
        for(i=0;i<10;i++){
            cows+=min(sletter[i],tletter[i]);
        }
        cows-=bulls;
        result=to_string(bulls)+"A"+to_string(cows)+"B";
        return result;
    }
};
