class Solution:
    def subsets(self, nums: List[int]) -> List[List[int]]:
        result=[]
        for i in range(2**len(nums)):
            temp=[]
            i1=i
            for j in range(len(nums)):
                if i1%2==1:
                    temp.append(nums[j])
                i1=i1//2
            result.append(temp)
        return result