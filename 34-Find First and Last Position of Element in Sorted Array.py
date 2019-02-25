class Solution:
    def searchRange(self,nums,target):
        if len(nums)<2:
            if len(nums)<1:
                return [-1,-1]
            else:
                if nums[0]==target:
                    return [0,0]
                else:
                    return [-1,-1]
        start=0
        stop=len(nums)-1
        center=int((stop+start)/2)
        while stop-start>1:
            center=int((stop+start)/2)
            if nums[center]>target:
                stop=center
            else:
                if nums[center]<target:
                    start=center
                else:
                    break
        
        if nums[0]==target:
            stop1=0
        else:
            start1=0
            stop1=center
            while stop1-start1>1:
                center1=int((stop1+start1)/2)
                if nums[center1]==target:
                    stop1=center1
                else:
                    start1=center1
        
        if nums[-1]==target:
            start2=len(nums)-1
        else:
            start2=center
            stop2=len(nums)-1
            while stop2-start2>1:
                center2=int((stop2+start2)/2)
                if nums[center2]>target:
                    stop2=center2
                else:
                    start2=center2
        
        if start2-stop1<=1:
            
            if nums[stop1]==target and nums[start2]==target:
                return [stop1,start2]
            if nums[stop1]!=target and nums[start2]==target:
                return [start2,start2]
            if nums[stop1]==target and nums[start2]!=target:
                return [stop1,stop1]
            return [-1,-1]
        
        return [stop1,start2]


nums = [5,7,7,8,8,10]
target = 8
#nums = [2,2]
#target = 2
#nums = [1,2,3]
#target = 3
#nums = [1,2,2]
#target = 2
nums = [5,7,7,8,8,10]
target = 6
mysolution=Solution()
print(mysolution.searchRange( nums, target))