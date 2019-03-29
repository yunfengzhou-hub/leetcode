class Solution {
public:
    bool isPrime(int n){
        for(int i=2;i<n;i++){
            if(n%i==0)
                return false;
        }
        return true;
    }
    int leastCommonFactor(int a,int b){
        while(true){
            a=a%b;
            if(a==0) return b;
            b=b%a;
            if(b==0) return a;
        }
    }
    int largestComponentSize(vector<int>& A) {
        sort(A.begin(),A.end());
        vector<vector<int>> clusters;
        vector<int> tempvector;
        int i,j,k,h,index;
        for(i=0;i<A.size();i++){
            //if(isPrime(A[i]))
            //    continue;
            index=-1;
            for(j=0;j<clusters.size();j++){
                for(k=0;k<clusters[j].size();k++){
                    if(leastCommonFactor(clusters[j][k],A[i])>1){
                        if(index<0){
                            clusters[j].push_back(A[i]);
                            index=j;
                            break;
                        }else{
                            for(h=0;h<clusters[j].size();h++){
                                clusters[index].push_back(clusters[j][h]);
                            }
                            clusters.erase(clusters.begin()+j);
                            j--;
                            break;
                        }
                    }
                }
            }
            if(index<0){
                clusters.push_back(tempvector);
                clusters[clusters.size()-1].push_back(A[i]);
            }
        }
        int result=1;
        for(i=0;i<clusters.size();i++){
            if(clusters[i].size()>result)
                result=clusters[i].size();
        }
        return result;
    }
};
