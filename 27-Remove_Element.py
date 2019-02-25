class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        if len(nums)<2:
            if len(nums)<1 or nums[0]==val:
                return 0
            else:
                return 1
                    
        count=0
        for i in range(len(nums)):
            if nums[i]!=val:
                nums[count]=nums[i]
                count+=1
        return count