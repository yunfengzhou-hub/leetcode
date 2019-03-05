class Solution:
    def minSubArrayLen(self, s: int, nums):
        bottom=0
        top=0
        currentsum=0
        while currentsum<s and top<len(nums):
            currentsum+=nums[top]
            top+=1
        if currentsum<s: return 0
        minlength=top
        while bottom<len(nums):
            while currentsum>=s and bottom<top:
                currentsum-=nums[bottom]
                bottom+=1
            minlength=min(minlength,top-bottom+1)
            while currentsum<s and top<len(nums):
                currentsum+=nums[top]
                top+=1
            if currentsum<s: return minlength
        return minlength

mysolution=Solution()
print(mysolution.minSubArrayLen(7,[2,3,1,2,4,3]))