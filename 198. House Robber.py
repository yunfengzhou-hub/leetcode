class Solution:
    def rob(self, nums: List[int]) -> int:
        if len(nums)<4:
            if len(nums)<1: return 0
            if len(nums)<3: return max(nums)
            return max(nums[1],nums[0]+nums[2])
        nums[2]+=nums[0]
        for i in range(3,len(nums)):
            nums[i]+=max(nums[i-2],nums[i-3])
        return max(nums[-3:])