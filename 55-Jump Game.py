class Solution:
    def canJump(self, nums: List[int]) -> bool:
        current=len(nums)-1
        while current>0:
            for i in range(current-1,-1,-1):
                if nums[i]>=current-i:
                    current=i
                    break
            if i==0:
                if nums[i]>=current-i: return True
                return False
        return True