class Solution:
    def countBits(self, num: int):
        result=[0 for _ in range(num+1)]
        for i in range(1,num+1):
            result[i]=result[i>>1]+i%2
        return result
    
my=Solution()
print(my.countBits(9))