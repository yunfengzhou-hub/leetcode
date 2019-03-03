class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        n1=1
        mn=1
        for i in range(1,n): n1*=i
        for i in range(m,m+n-1): mn*=i
        return int(mn/n1)