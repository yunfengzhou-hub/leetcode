class Solution:
    def findMedianSortedArrays(self, nums1, nums2):
        count1=0;
        count2=0;
        l3=[]
        while count1<len(nums1) and count2<len(nums2):
            if nums1[count1]>nums2[count2]:
                l3.append(nums2[count2])
                count2+=1
            else:
                l3.append(nums1[count1])
                count1+=1
        if count1>=len(nums1):
            while count2<len(nums2):
                l3.append(nums2[count2])
                count2+=1
        else:
            while count1<len(nums1):
                l3.append(nums1[count1])
                count1+=1
        if len(l3)%2==1:
            return l3[int((len(nums1)+len(nums2))/2)]
        else:
            return (l3[int((len(nums1)+len(nums2))/2)]+l3[int((len(nums1)+len(nums2))/2)-1])/2
        
nums1 = []
nums2 = [2,3]
mysolution=Solution()
med=mysolution.findMedianSortedArrays(nums1,nums2)
print(med)