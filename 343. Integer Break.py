class Solution:
    def integerBreak(self, n: int) -> int:
        if n==2: return 1
        result=[1 for _ in range(n+1)]
        for i in range(3,n+1):
            for j in range(i):
                result[i]=max(result[i],result[i-j]*j,(i-j)*j)
        return result[-1]

my=Solution()
print(my.integerBreak(6))