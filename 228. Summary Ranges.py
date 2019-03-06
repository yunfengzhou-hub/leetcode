class Solution:
    def summaryRanges(self, nums: List[int]) -> List[str]:
        if len(nums)<2: 
            if len(nums)<1:
                return []
            return[str(nums[0])]
        bottom=0
        result=[]
        for top in range(len(nums)-1):
            if nums[top]+1!=nums[top+1]:
                if top>bottom:
                    result.append(str(nums[bottom])+'->'+str(nums[top]))
                else:
                    result.append(str(nums[bottom]))
                bottom=top+1
        top+=1
        if top>bottom:
            result.append(str(nums[bottom])+'->'+str(nums[top]))
        else:
            result.append(str(nums[bottom]))
        return result