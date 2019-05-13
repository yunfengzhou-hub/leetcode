class Solution {
public:
    int s1num[26]={0};
    bool allZero(){
        for(int i=0;i<26;i++){
            if(s1num[i]!=0)
                return false;
        }return true;
    }
    vector<int> findAnagrams(string s2, string s1) {
        vector<int> result;
        if(s2.length()<s1.length()) return result;
        int i;
        for(i=0;i<s1.length();i++){
            s1num[s1[i]-'a']++;
        }
        for(i=0;i<s1.length();i++){
            s1num[s2[i]-'a']--;
        }
        if(allZero()) result.push_back(i-s1.length());
        for(i=s1.length();i<s2.length();i++){
            s1num[s2[i]-'a']--;
            s1num[s2[i-s1.length()]-'a']++;
            if(allZero()) result.push_back(i-s1.length()+1);
        }return result;
    }
};
