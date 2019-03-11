class Solution:
    def numDecodings(self, s: str) -> int:
        if len(s)<2:
            if len(s)<1: return 0
            if s[0]=='0': return 0
            return 1 
        ways=[0 for _ in range(len(s))]
        ways[0]=1
        if s[0]=='0': return 0
        for i in range(1,len(s)):
            if s[i]=='0' and (s[i-1]=='0' or int(s[i-1])>2): return 0
        if int(s[0:2])<27:
            ways[1]=2
        else:
            ways[1]=1
        if s[1]=='0':
            ways[1]=1
        for i in range(2,len(ways)):
            if int(s[i-1:i+1])<27 and s[i-1]!='0':
                ways[i]+=ways[i-2]
            if s[i]!='0':
                ways[i]+=ways[i-1]
        return ways[-1]

my=Solution()
print(my.numDecodings('101111'))