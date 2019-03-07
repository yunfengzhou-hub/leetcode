class Solution:
    def climbStairs(self, n: int) -> int:
        if n<4: return n
        steps=[0 for _ in range(n)]
        steps[0]=1
        steps[1]=2
        for i in range(2,n):
            steps[i]=steps[i-1]+steps[i-2]
        print(steps)
        return steps[-1]

my=Solution()
print(my.climbStairs(10))