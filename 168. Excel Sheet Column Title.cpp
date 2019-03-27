class Solution {
public:
    string convertToTitle(int n) {
        string result,result2;
        char temp;
        while(n>0){
            temp=(n-1)%26+1;
            result2+=temp+65;
            n=(n-1)/26;
        }
        for(temp=result2.length()-1;temp>=0;temp--){
            result+=result2[temp];
        }
        return result;
    }
};
