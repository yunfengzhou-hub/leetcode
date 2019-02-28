class Solution:
    def maxSubArray(self, nums):
        if len(nums)<2:
            if len(nums)<1:
                return 0
            else:
                return nums[0]
        
        
        for i in range(1,len(nums)):
            nums[i]+=nums[i-1]
#        print(nums)
        
        maxindex=0
        minindex=0
        maxvalue=nums[maxindex]
        minvalue=nums[minindex]
        for i in range(len(nums)):
            if nums[i]>=maxvalue:
                maxindex=i
                maxvalue=nums[maxindex]
            if nums[i]<minvalue:
                minindex=i
                minvalue=nums[minindex]
#        print(maxindex,minindex)
        
        if maxindex<minindex:
            minindex1=maxindex
            minvalue1=float('inf')
            for i in range(maxindex):
                if nums[i]<=nums[minindex1]:
                    minindex1=i
                    minvalue1=nums[minindex1]
            
            maxindex1=minindex
            maxvalue1=-float('inf')
            for i in range(minindex+1,len(nums)):
                if nums[i]>=nums[maxindex1]:
                    maxindex1=i
                    maxvalue1=nums[maxindex1]
            
            print([maxvalue-minvalue1,maxvalue1-minvalue,maxvalue,minvalue-nums[minindex-1]])
            return max(maxvalue-minvalue1,maxvalue1-minvalue,maxvalue,minvalue-nums[minindex-1])
        
        return max(maxvalue,maxvalue-minvalue)
#class Solution:
#    def maxSubArray(self, nums: List[int]) -> int:
#        if len(nums)<2:
#            if len(nums)<1:
#                return 0
#            else:
#                return nums[0]
#        
#        for i in range(1,len(nums)):
#            nums[i]+=nums[i-1]
#        
#        maxindex=0
#        minindex=0
#        for i in range(len(nums)):
#            if nums[i]>=nums[maxindex]:
#                maxindex=i
#            if nums[i]<nums[minindex]:
#                minindex=i
#        
#        minindex1=0
#        for i in range(maxindex):
#            if nums[i]<nums[minindex1]:
#                minindex1=i
#        
#        maxindex1=0
#        for i in range(minindex,len(nums)):
#            if nums[i]>=nums[maxindex1]:
#                maxindex1=i
#        return max(nums[maxindex]-nums[minindex1],nums[maxindex1]-nums[minindex])

mysolution=Solution()
print(mysolution.maxSubArray([-1,0,-2]))