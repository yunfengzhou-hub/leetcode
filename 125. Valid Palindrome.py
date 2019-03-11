class Solution:
    def isPalindrome(self, s: str) -> bool:
        x=[]
        s=s.lower()
        for i in range(len(s)):
            if s[i].isalnum():
                x.append(s[i])
        for i in range(len(x)):
            if x[i]!=x[-i-1]:
                return False
        return True