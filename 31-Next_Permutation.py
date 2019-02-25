class Solution:
    def nextPermutation(self, nums):
        """
        Do not return anything, modify nums in-place instead.
        """
        if len(nums)>1:
            for i in range(len(nums)-2,-2,-1):
                
                if nums[i]<nums[i+1]:
                    break
#            print(i)
            if i<0:
                for i in range(int(len(nums)/2)):
#                    print(i)
                    a=nums[i]
                    nums[i]=nums[-1-i]
                    nums[-1-i]=a
            else:
                for j in range(len(nums)-1,i,-1):
                    if nums[i]<nums[j]:
#                        print(j)
                        a=nums[i]
                        nums[i]=nums[j]
                        nums[j]=a
#                        print(nums)
                        for k in range(int((len(nums)-i-1)/2)):
#                            print(k)
                            a=nums[k+i+1]
                            nums[k+i+1]=nums[-1-k]
                            nums[-1-k]=a
                        break

mysolution=Solution()
nums=[5,4,7,5,3,2]
mysolution.nextPermutation(nums)