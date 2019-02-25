class Solution:
    def threeSum(self, nums, target):
        nums.sort()
        
        mysum=nums[0]+nums[1]+nums[2]
        dist=abs(mysum-target)
        
        for lo in range(len(nums)-2):
            me=lo+1
            hi=len(nums)-1
            while me<hi:
                if abs(nums[lo]+nums[me]+nums[hi]-target)<dist:
                    mysum=nums[lo]+nums[me]+nums[hi]
                    dist=abs(mysum-target)
                    if dist==0:
                        return mysum
                if nums[lo]+nums[me]+nums[hi]>target:
                    hi-=1
                else:
                    me+=1
        return mysum
    
#nums = [-1, 0, 1, 2, -1, -4]
nums = [0,-1,0,3]
#nums = [-4,-2,1,-5,-4,-4,4,-2,0,4,0,-2,3,1,-5,0]
mysolution=Solution()
res=mysolution.threeSum(nums,1)