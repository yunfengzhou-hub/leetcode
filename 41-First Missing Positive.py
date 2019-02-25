class Solution:
    def firstMissingPositive(self, nums):
        listlength=len(nums)
        for i in range(listlength):
            nums[i]-=1
        for i in range(listlength):
            while nums[i]!=i and nums[i]>=0 and nums[i]<listlength and nums[nums[i]]!=nums[i]:
                print(i,nums[i])
                a=nums[nums[i]]
                nums[nums[i]]=nums[i]
                nums[i]=a
        for i in range(listlength):
            if nums[i]!=i:
                return i+1
        return listlength+1


#nums=[1,2,0]
#nums=[3,4,-1,1]
#nums=[7,8,9,11,12]
nums=[1,1]
mysolution=Solution()
print(mysolution.firstMissingPositive(nums))