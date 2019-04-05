class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()<4){
            if(nums.size()<1) return 0;
            return *max_element(nums.begin(),nums.end());
        }
        vector<bool> isfirst(nums.size(),false);
        int i,temp;
        isfirst[0]=true;
        isfirst[2]=true;
        nums[2]+=nums[0];
        for(i=3;i<nums.size()-1;i++){
            if(nums[i-2]>nums[i-3])
                temp=i-2;
            else
                temp=i-3;
            nums[i]+=nums[temp];
            isfirst[i]=isfirst[temp];
            if(nums[i-2]==nums[i-3])
                isfirst[i]=isfirst[i-2]&&isfirst[i-3];
        }
        if(!isfirst[i-2]&&!isfirst[i-3])
            nums[i]+=max(nums[i-2],nums[i-3]);
        else if(isfirst[i-2])
            nums[i]+=nums[i-3];
        else
            nums[i]+=nums[i-2];
        return *max_element(nums.end()-3,nums.end());
    }
};
