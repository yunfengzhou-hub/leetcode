class Solution {
public:
    int minMoves2(vector<int>& nums) {
        if(nums.size()<1) return 0;
        sort(nums.begin(),nums.end());
        int move=0,target=int((nums[int(nums.size()/2)]+nums[int((nums.size()-1)/2)])/2);
        for(int i=0;i<nums.size();i++){
            move+=abs(nums[i]-target);
        }
        return move;
    }
};
