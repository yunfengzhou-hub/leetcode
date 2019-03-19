class Solution {
public:
    int singleNumber(vector<int>& nums) {
        for(int i=nums.size()-1;i>0;i--){
            nums[i-1]^=nums[i];
        }
        return nums[0];
    }
};
