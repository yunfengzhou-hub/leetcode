class Solution {
public:
    vector<vector<int>> result;
    vector<int> temp;
    void myloop(int start,int finish,int k){
        if(k<1){
            result.push_back(temp);
            return;
        }

        for(int i=start;i<=finish-k+1;i++){
            temp.push_back(i);
            myloop(i+1,finish,k-1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        myloop(1,n,k);
        return result;
    }
};
