class Solution {
public:
    string reverseWords(string s) {
        s=' '+s;
        string result="";
        int start,finish=s.size()-1,i;
        /*while(start<s.length()&&s[start]==' ') start++;
        finish=start;
        while(true){
            while(finish<s.length()&&s[finish]!=' ') finish++;
            if(finish>=s.length()) break;
            for(;start<=finish;start++){
                result+=s[start];
            }
            while(start<s.length()&&s[start]==' ') start++;
            if(start>=s.length()) break;
            result+=' ';
        }*/
        while(finish>=0&&s[finish]==' ') finish--;
        start=finish;
        while(true){
            while(start>=0&&s[start]!=' ') start--;
            if(start<0) break;
            for(i=start+1;i<=finish;i++)
                result+=s[i];
            finish=start;
            while(finish>=0&&s[finish]==' ') finish--;
            if(finish<0) break;
            result+=' ';
            start=finish;
        }
        return result;
    }

};
