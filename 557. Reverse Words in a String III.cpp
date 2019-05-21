class Solution {
public:
    string reverseWords(string s) {
        int start=0,finish,i;
        char temp;
        while(true){
            while(start<s.length()&&s[start]==' ') start++;
            //cout<<s<<' ';
            if(start>=s.length()) break;
            finish=start;
            while(finish<s.length()&&s[finish]!=' ') finish++;
            for(i=0;i<(finish-start)/2;i++){
                temp=s[start+i];
                s[start+i]=s[finish-1-i];
                s[finish-1-i]=temp;
            }
            start=finish;
        }
        return s;
    }
};
