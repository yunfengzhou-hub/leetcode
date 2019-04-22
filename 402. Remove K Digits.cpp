class Solution {
public:
    string removeKdigits(string num, int k) {
        int reslen=num.length()-k,i,j;
        string result;
        char current,temp;
        if(reslen<=0) return "0";
        result=num.substr(0,reslen);

        for(i=reslen;i<num.length();i++){
            //current=num[i];

            result+=num[i];
            //cout<<result.length()<<' ';
            for(j=0;j<reslen;j++){
                if(result[j]>result[j+1]){
                    result.erase(j,1);
                    break;
                }
            }
            if(result.length()>reslen) result.erase(reslen);
        }
        for(i=0;i<reslen;i++){
            if(result[i]!='0')
                break;
        }
        result.erase(0,i);
        if(result.length()<1) return "0";
        return result;
    }
};
