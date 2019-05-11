class Solution {
public:
    char findTheDifference(string s, string t) {
        int num[26]={0},i;
        for(i=0;i<t.length();i++){
            num[t[i]-'a']++;
        }
        for(i=0;i<s.length();i++){
            num[s[i]-'a']--;
        }
        for(i=0;i<26;i++){
            if(num[i])
                return 'a'+i;
        }
        return 0;
    }
};
