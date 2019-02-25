class Solution:
    def search(self, nums, target):
        if len(nums)>0:
            start=0
            stop=len(nums)-1
            if nums[0]>nums[-1]:
                while stop-start>1:
                    center=int((start+stop)/2)
                    if nums[center]<nums[stop]:
                        stop=center
                    else:
                        start=center
                stop-=1
                start=start+1-len(nums)
            
            while stop-start>1:
                center=int((start+stop)/2)
                if nums[center]>target:
                    stop=center
                else:
                    if nums[center]<target:
                        start=center
                    else:
                        if center<0:
                            center+=len(nums)
                        return center
            if nums[stop]==target:
                if stop<0:
                    stop+=len(nums)
                return stop
            if nums[start]==target:
                if start<0:
                    start+=len(nums)
                return start
        return -1

#nums = [4,5,6,7,0,1,2]
#target = 0
nums = [1,3,5]
target = 5
mysolution=Solution()
print(mysolution.search(nums,target))