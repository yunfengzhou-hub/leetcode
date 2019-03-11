class Solution:
    def isValid(self, s: str) -> bool:
        stack=[' ' for _ in range(len(s))]
        top=0
        for i in range(len(s)):
            if s[i] in {'(','[','{'}:
                stack[top]=s[i]
                top+=1
            elif s[i]==')':
                if stack[top-1]!='(': return False
                top-=1
            elif s[i]==']':
                if stack[top-1]!='[': return False
                top-=1
            elif s[i]=='}':
                if stack[top-1]!='{': return False
                top-=1
            else: return False
        if top>0: return False
        return True