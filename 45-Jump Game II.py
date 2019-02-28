class Solution:
    def jump(self, nums: List[int]) -> int:
        if len(nums)<2: return 0
        level=0
        i=0
        currentMax=0
        nextMax=0
        while i<len(nums):
            level+=1
            for j in range(i,currentMax+1):
                nextMax=max(nextMax,nums[j]+j)
                if nextMax>=len(nums)-1: return level
            i=currentMax+1
            currentMax=nextMax
        return 0