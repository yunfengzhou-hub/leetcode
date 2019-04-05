class NumArray {
public:
    vector<int> mynum;
    NumArray(vector<int>& nums) {
        mynum=nums;
        for(int i=1;i<mynum.size();i++){
            mynum[i]+=mynum[i-1];
        }
    }

    void update(int i, int val) {
        int temp;
        if(i==0)
            temp=mynum[i];
        else
            temp=mynum[i]-mynum[i-1];
        int difference=val-temp;
        for(int j=i;j<mynum.size();j++){
            mynum[j]+=difference;
        }
    }

    int sumRange(int i, int j) {
        if(i==0) return mynum[j];
        return mynum[j]-mynum[i-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * obj->update(i,val);
 * int param_2 = obj->sumRange(i,j);
 */
