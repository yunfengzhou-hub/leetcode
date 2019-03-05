class Solution:
    def findMin(self, nums: List[int]) -> int:
        if len(nums)<2:
            if len(nums)<1: return []
            return nums[0]
        for i in range(len(nums)):
            if nums[i]<nums[i-1]: break
        return nums[i]