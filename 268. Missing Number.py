class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        total=0
        for i in range(len(nums)):
            total+=nums[i]
        return int(len(nums)*(len(nums)+1)/2-total)