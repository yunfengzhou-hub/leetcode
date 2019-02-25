class Solution:
    def searchInsert(self, nums, target):
        i=0
        while i < len(nums):
            if nums[i]>=target:
                break
            i+=1
        return i

nums=[1,3,5,6]
target=0
mysolution=Solution()
print(mysolution.searchInsert(nums,target))