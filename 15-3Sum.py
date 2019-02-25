class Solution:
    def threeSum(self, nums):
        nums.sort()
        res=list(list())
        
        lo=0
        me=lo+1
        hi=len(nums)-1
        while me<hi:
            if nums[lo]+nums[me]+nums[hi]>0:
                hi-=1
                while nums[hi]==nums[hi+1] and me<hi:
                    hi-=1
            else:
                if nums[lo]+nums[me]+nums[hi]==0:
                    res.append([nums[lo],nums[me],nums[hi]])
                me+=1
                while nums[me]==nums[me-1] and me<hi:
                    me+=1
        
        for lo in range(1,len(nums)-2):
            if nums[lo]!=nums[lo-1]:
                me=lo+1
                hi=len(nums)-1
                while me<hi:
                    if nums[lo]+nums[me]+nums[hi]>0:
                        hi-=1
                        while nums[hi]==nums[hi+1] and me<hi:
                            hi-=1
                    else:
                        if nums[lo]+nums[me]+nums[hi]==0:
                            res.append([nums[lo],nums[me],nums[hi]])
                        me+=1
                        while nums[me]==nums[me-1] and me<hi:
                            me+=1
        return res
    
#nums = [-1, 0, 1, 2, -1, -4]
#nums = [0,-1,0,1]
nums = [-4,-2,1,-5,-4,-4,4,-2,0,4,0,-2,3,1,-5,0]
mysolution=Solution()
res=mysolution.threeSum(nums)