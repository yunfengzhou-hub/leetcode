class Solution {
public:
    bool wordPattern(string pattern, string str) {
        vector<string> match(26,"");
        int start=0,finish=0,top=0,i;
        for(finish=0;finish<str.length();finish++){
            if(str[finish]==' ') start++;
        }
        if(start!=pattern.length()-1) return false;
        start=0;
        finish=0;
        while(top<pattern.length()){
            while(finish<str.length()&&str[finish]!=' ') finish++;
            /*if(match[pattern[top]-97]==""){
                match[pattern[top]-97]=str.substr(start,finish-start);
            }else{
                if(match[pattern[top]-97].compare(str.substr(start,finish-start))!=0)
                    return false;
            }*/
            if(match[pattern[top]-97]!=""){
                if(match[pattern[top]-97].compare(str.substr(start,finish-start))!=0)
                    return false;
            }else{
                for(i=0;i<26;i++){
                    if(match[i].compare(str.substr(start,finish-start))==0)
                        return false;
                }
                match[pattern[top]-97]=str.substr(start,finish-start);
            }
            //cout<<pattern[top]<<' '<<match[pattern[top]-97]<<' '<<str.substr(start,finish-start)<<endl;
            finish++;
            start=finish;
            top++;
        }
        return true;
    }
};
