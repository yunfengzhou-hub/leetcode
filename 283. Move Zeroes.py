class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        zeronum=0
        for i in range(len(nums)):
            if nums[i]==0:
                zeronum+=1
            else:
                nums[i-zeronum]=nums[i]
        for i in range(len(nums)-zeronum,len(nums)):
            nums[i]=0