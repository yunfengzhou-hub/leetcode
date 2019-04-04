class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> letters(26,0);
        int i;
        for(i=0;i<s.length();i++){
            letters[s[i]-97]++;
        }
        for(i=0;i<t.length();i++){
            letters[t[i]-97]--;
        }
        for(i=0;i<26;i++){
            if(letters[i]!=0) return false;
        }
        return true;
    }
};
