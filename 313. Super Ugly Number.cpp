class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        vector<int> index(primes.size(),0);
        vector<int> uglyNums;
        int top=0,temp,i;
        uglyNums.push_back(1);
        while(top<n-1){
            temp=primes[0]*uglyNums[index[0]];
            for(i=1;i<primes.size();i++){
                temp=min(temp,primes[i]*uglyNums[index[i]]);
            }
            uglyNums.push_back(temp);
            top++;
            for(i=0;i<primes.size();i++)
                if(temp==primes[i]*uglyNums[index[i]])
                    index[i]++;
        }
        return uglyNums[top];
    }
};
