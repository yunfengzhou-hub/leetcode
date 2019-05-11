class Solution {
public:
    int totalHammingDistance(vector<int>& nums) {
        int i,j;
        int totalnum=0,temp;
        for(j=0;j<32;j++){
            temp=0;
            for(i=0;i<nums.size();i++){
                temp+=(nums[i]>>j)&1;
            }
            totalnum+=temp*(i-temp);
        }
        return totalnum;
    }
};
