class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        vector<int> primes;
        int i,j;
        bool canrep;
        for(i=s.length()-1;i>0;i--){
            if(s.length()%i==0)
                primes.push_back(i);
        }
        for(i=0;i<primes.size();i++){
            canrep=true;
            for(j=1;j<s.length()/primes[i];j++){
                if(s.substr(0,primes[i])!=s.substr(primes[i]*j,primes[i])){
                    canrep=false;
                    break;
                }
            }
            if(canrep)
                return true;
        }
        return false;
    }
};
