class Solution:
    def twoSum(self, numbers, target):
        index1=0
        index2=len(numbers)-1
        while True:
            if numbers[index1]+numbers[index2]>target:
                index2-=1
            else:
                if numbers[index1]+numbers[index2]==target: break
                index1+=1
            print(index1,index2)
        return [index1,index2]

mysolution=Solution()
print(mysolution.twoSum([3,24,50,79,88,150,345],200))