class Solution {
public:
    bool isVowel(char c){
        if(c=='a') return true;
        if(c=='e') return true;
        if(c=='i') return true;
        if(c=='o') return true;
        if(c=='u') return true;
        if(c=='A') return true;
        if(c=='E') return true;
        if(c=='I') return true;
        if(c=='O') return true;
        if(c=='U') return true;
        return false;

    }
    string reverseVowels(string s) {
        vector<int> index;
        vector<char> vowels;
        int len=-1,i;
        for(i=0;i<s.length();i++){
            if(isVowel(s[i])){
                index.push_back(i);
                vowels.push_back(s[i]);
                len++;
            }
        }
        for(i=0;i<=len;i++){
            s[index[i]]=vowels[len-i];
        }
        return s;
    }
};
