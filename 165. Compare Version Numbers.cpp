class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i=0,temp,begin1=0,begin2=0;
        while(begin1<version1.length()&&version1[begin1]=='0')
            begin1++;
        while(begin2<version2.length()&&version2[begin2]=='0')
            begin2++;

        temp=min(version1.length(),version2.length());
        for(;i<temp;i++){
            if(version1[i]!=version2[i]){
                if(version1[i]=='.')
                    return -1;
                else if(version2[i]=='.')
                    return 1;
                else if(version1[i]>version2[i])
                    return 1;
                return -1;
            }
        }
        if(version1.length()>version2.length()){
            for(;i<version1.length();i++){
                if(version1[i]!='.'&&version1[i]!='0')
                    return 1;
            }
            return 0;
        }else if(version1.length()<version2.length()){
            for(;i<version2.length();i++){
                if(version2[i]!='.'&&version2[i]!='0')
                    return -1;
            }
            return 0;
        }else{
            return 0;
        }
    }
};
