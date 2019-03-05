class Solution:
    def rotate(self, nums: List[int], k: int) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        k=k%len(nums)
        temp=nums[len(nums)-k:len(nums)]
        for i in range(len(nums)-1,k-1,-1):
            nums[i]=nums[i-k]
        nums[0:k]=temp