class Solution:
    def maxProduct(self, nums: List[int]) -> int:
        if len(nums)<2: return nums[0]
        maxprod=nums[0]
        top=0
        while top<len(nums):
            while top<len(nums) and nums[top]==0: top+=1
            bottom=top
            while top<len(nums) and nums[top]!=0: top+=1
            currentprod=nums[bottom]
            for i in range(bottom+1,top): currentprod*=nums[i]
            if currentprod<0:
                bottom1=1
                for i in range(bottom,top):
                    bottom1*=nums[i]
                    if nums[i]<0: break
                if i<top-1:
                    top1=1
                    for i in range(top-1,bottom-1,-1):
                        top1*=nums[i]
                        if nums[i]<0: break
                    currentprod/=max(bottom1,top1)
                    maxprod=max(maxprod,currentprod)
                else:
                    maxprod=max(maxprod,max(nums[bottom:top]))
        if 0 in nums:
             maxprod= max(0,maxprod)
        return maxprod