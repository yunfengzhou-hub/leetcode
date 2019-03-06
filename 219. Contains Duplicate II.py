class Solution:
    def containsNearbyDuplicate(self, nums: List[int], k: int) -> bool:
#        if len(nums)<2: return False
#        k=min(k,len(nums)-1)
#        for i in range(len(nums)-k):
#            for j in range(1,k+1):
#                if nums[i]==nums[i+j]:
#                    return True
#        for i in range(len(nums)-k-1,len(nums)):
#            for j in range(i+1,len(nums)):
#                if nums[i]==nums[j]:
#                    return True
#        return False
        
#        if len(nums)<2: return False
#        for i in range(1,k+1):
#            for j in range(len(nums)-i):
#                if nums[j]==nums[j+i]: return True
#        return False
        
        if len(nums)<2: return False
        nums2=[]
        for i in range(len(nums)):
            nums2.append([nums[i],i])
        nums2.sort()
        for i in range(len(nums)-1):
            if nums2[i][0]==nums2[i+1][0] and nums2[i+1][1]-nums2[i][1]<=k:
                return True
        return False