class Solution:
    def longestPalindrome(self, s: str) -> str:
        if len(s)<3:
            if len(s)<2 or s[0]==s[1]: return s
            return s[0]
        
        s2=['?' for _ in range(2*len(s)+1)]
        for i in range(len(s)):
            s2[2*i+1]=s[i]
#        print(str(s2))
        maxcenter=0
        maxlength=0
        for i in range(len(s2)):
            j=0
            for j in range(1,min(i+1,len(s2)-i)):
                if s2[i-j]!=s2[i+j]: break
#            print(i,j)
            if j-1>maxlength:
                maxlength=j-1
                maxcenter=i
#        print(maxcenter,maxlength)
        if maxlength<=1: return s[0]
        s2=s2[maxcenter-maxlength:maxcenter+maxlength+1]
#        print(s2)
        result=str()
        if s2[0] == '?':
            for i in range(1,len(s2),2):
                result+=s2[i]
        else:
            
            for i in range(0,len(s2),2):
                result+=s2[i]
        return result

mysolution=Solution()
print(mysolution.longestPalindrome("ccc"))