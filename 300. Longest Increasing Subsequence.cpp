class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        if(nums.size()<2)
            return nums.size();
        vector<int> len(nums.size(),1);
        int i,j;
        for(i=1;i<nums.size();i++){
            for(j=0;j<i;j++){
                if(nums[j]<nums[i])
                    len[i]=max(len[i],len[j]+1);
            }
        }
        return *max_element(len.begin(),len.end());
    }
};
