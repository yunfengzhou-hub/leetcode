class Solution:
    def findPeakElement(self, nums):
        if len(nums)<3:
            if len(nums)<2: return 0
            if nums[0]>nums[1]: return 0
            return 1
        start=0
        end=len(nums)-1
        while end-start>=2:
            center=int((start+end)/2)
            if nums[center]>nums[center+1] and nums[center]>nums[center-1]: return center
            if nums[center]>nums[center+1] and nums[center]<nums[center-1]: end=center
            else: start=center
        if nums[start]<nums[end]: return end
        return start

mysolution=Solution()
print(mysolution.findPeakElement([1,2,3,1]))