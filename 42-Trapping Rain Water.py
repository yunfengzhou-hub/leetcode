class Solution:
    def findMax(self,height,start,finish):
        maxvalue=0
        maxplace=0
        for i in range(start,finish):
            if height[i]>=maxvalue:
                maxvalue=height[i]
                maxplace=i
        return maxplace
    def trap(self, height):
        if len(height)<3:
            return 0
        
        maxcenter=self.findMax(height,0,len(height))
        volumn=0
        
        maxplace=maxcenter
        i=maxplace+1
        while i<len(height):
            i=maxplace+1
            while i<len(height) and height[i]<=height[i-1]: i+=1
            if i>=len(height): break
            maxplace1=self.findMax(height,i,len(height))
            volumn+=height[maxplace1]*(maxplace1-maxplace-1)
            for j in range(maxplace+1,maxplace1):
                volumn-=min(height[maxplace1],height[j])
            maxplace=maxplace1
         
        maxplace=maxcenter
        i=maxplace-1
        while i>=0:
            i=maxplace-1
            while i>=0 and height[i]<=height[i+1]: i-=1
            if i<0: break
            maxplace1=self.findMax(height,0,i+1)
            volumn+=height[maxplace1]*(maxplace-maxplace1-1)
            for j in range(maxplace1+1,maxplace):
                volumn-=min(height[maxplace1],height[j])
            maxplace=maxplace1
        return volumn

mysolution=Solution()
height=[0,1,0,2,1,0,1,3,2,1,2,1]
#height=[2,0,1]
print(mysolution.trap(height))