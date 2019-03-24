#include <math.h>
class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxgap=0;
        for(int i=1;i<nums.size();i++){
            maxgap=max(maxgap,nums[i]-nums[i-1]);
        }
        return maxgap;
    }
};
