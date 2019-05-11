class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if(nums.size()<3) return false;
        int i;
        for(i=2;i<nums.size();i++){
            if(nums[i]<nums[i-1]&&nums[i-1]>nums[i-2])
                return true;
        }
        return false;
    }
};
