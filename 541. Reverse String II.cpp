class Solution {
public:
    string reverseStr(string s, int k) {
        int i,j;
        char temp;
        for(i=0;i<s.length();i+=2*k){
            if(k>s.length()-i)
                k=s.length()-i;
            for(j=0;j<k/2;j++){
                if(j+i>=s.length()) break;
                temp=s[i+j];
                s[i+j]=s[i+k-1-j];
                s[i+k-1-j]=temp;
            }
        }
        return s;
    }
};
