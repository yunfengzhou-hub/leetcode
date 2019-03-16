class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        int i;
        A[A.size()-1]+=K;
        for(i=A.size()-2;i>=0;i--){
            A[i]+=A[i+1]/10;
            A[i+1]%=10;
        }
        while(A[0]>=10){
            A.insert(A.begin(),A[0]/10)
            A[1]%=10;
        }
        return A;
    }
};
