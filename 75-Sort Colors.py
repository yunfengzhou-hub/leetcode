class Solution:
    def sortColors(self, nums):
        """
        Do not return anything, modify nums in-place instead.
        """
        count=[0,0,0]
        for i in range(len(nums)):
            count[nums[i]]+=1
        for i in range(count[0]):
            nums[i]=0
        for i in range(count[0],count[0]+count[1]):
            nums[i]=1
        for i in range(count[0]+count[1],len(nums)):
            nums[i]=2
#        if len(nums)>=2:
#            start=0
#            start1=0
#            end=len(nums)-1
#            end1=len(nums)-1
#            while start1<end1 and nums[start1]!=1: start1+=1
#            while end1>=start1 and nums[end1]!=1:    end1-=1
#            while True:
#                while start<end and nums[start]!=2:
#                    if nums[start]==0:
#                        if start1<start:
#                            nums[start1]=0
#                            nums[start]=1
#                            start1+=1
#                    start+=1
#                while end>start and nums[end]!=0:
#                    if nums[end]==2:
#                        if end1>end:
#                            nums[end1]=2
#                            nums[end]=1
#                            end1-=1
#                    end-=1
#                print(start,start1,end,end1)
#                if start>end: break
#                if start1<len(nums):
#                    if start<len(nums):
#                        if end>=0:
#                            nums[max(start,start1)]=1
#                            nums[min(end,end1)]=1
#                            nums[min(start,start1)]=0
#                            nums[max(end,end1)]=2
#                        else:
#                            nums[start]=1
#                            nums[start1]=1
#                            nums[end1]=1
#                            nums[max(start,start1,end1)]=2
#                    else:
#                        if end>=0:
#                            nums[end]=1
#                            nums[start1]=1
#                            nums[end1]=1
#                            nums[min(end,start1,end1)]=0
#                else:
#                    if start<len(nums) and end>=0:
#                        nums[start]=0
#                        nums[end]=2
#                print(nums)
#                
#                start+=1
#                end-1
#                if start>end: break
#        
#mysolution=Solution()
##a=[2,0,2,1,1,0]
#a=[1,2,0,0]
#mysolution.sortColors(a)