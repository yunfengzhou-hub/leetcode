class Solution {
public:
    int minMoves(vector<int>& nums) {
        if(nums.size()<1) return 0;
        int minnum=*min_element(nums.begin(),nums.end()),i,move=0;
        for(i=0;i<nums.size();i++){
            move+=nums[i]-minnum;
        }
        return move;
    }
};
