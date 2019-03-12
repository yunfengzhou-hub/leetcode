class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s)<2:
            return len(s)
        maxlength=1
#        for i in range(len(s)):
#            for j in range(i+maxlength,len(s)):
#                if s[i]==s[j]:
#                    print(s[i:j+1])
#                    maxlength=j-i
#                    break
#            maxlength=max(j-i-1,maxlength)
#        return maxlength
        bottom=0
        top=1
        while top<len(s):
            if s[top] in s[bottom:top]:
                maxlength=max(maxlength,top-bottom)
                while s[bottom]!=s[top]: bottom+=1
                bottom+=1
            top+=1
        maxlength=max(maxlength,top-bottom)
        return maxlength

my=Solution()
print(my.lengthOfLongestSubstring("pwwkew"))