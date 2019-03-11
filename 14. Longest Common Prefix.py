class Solution:
    def longestCommonPrefix(self, strs):
        if len(strs)<2: 
            if len(strs)<1: return ''
            return strs[0]
        if len(strs[0])<1: return ''
        
        i=0
        while i<len(strs[0]):
            for j in range(1,len(strs)):
                if len(strs[j])<=i or strs[0][i]!=strs[j][i]: return strs[0][:i]
            i+=1
#        
#        for i in range(len(strs[0])):
#            for j in range(1,len(strs)):
#                if len(strs[j])<=i or strs[0][i]!=strs[j][i]: return strs[0][:i]
        print(i)
        return strs[0][:i]

my=Solution()
print(my.longestCommonPrefix(["flower","flow","flight"]))