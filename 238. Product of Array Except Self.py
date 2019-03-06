class Solution:
    def myproduct(self,nums,start,end,currentprod):
        if end-start>2:
            center=int((start+end)/2)
            temp1=currentprod
            for i in range(center,end):
                temp1*=nums[i]
            self.myproduct(nums,start,center,temp1)
            temp1=currentprod
            for i in range(start,center):
                temp1*=nums[i]
            self.myproduct(nums,center,end,temp1)
        else:
            if end-start==2:
                self.result[start]=currentprod*nums[start+1]
                self.result[start+1]=currentprod*nums[start]
            else:
                self.result[start]=currentprod
    def productExceptSelf(self, nums: List[int]) -> List[int]:
#        product=[1 for _ in range(len(nums))]
#        for i in range(1,len(nums)):
#            product[0]*=nums[i]
#        for i in range(1,len(nums)):
#            product[i]=product[i-1]/nums[i]*nums[i-1]
#        return product
        
        start=0
        end=len(nums)
        self.result=[1 for _ in range(len(nums))]
        self.myproduct(nums,start,end,1)
        return self.result