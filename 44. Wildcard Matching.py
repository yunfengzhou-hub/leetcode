class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        index=[]
        ptop=0
        stop=0
        while True:
            if p[ptop]=='?':
                ptop+=1
                stop+=1
                if ptop>=len(p) or stop>=len(s): break
            if p[ptop]=='*':
                ptop+=1
                if ptop>=len(p) or stop>=len(s): break
            if p[ptop].isalpha(): break
        if ptop>=len(p): return True
        
        for i in range(stop,len(s)):
            if s[i]==p[0]:
                index.append(i)
        if len(index)<1: return False
        
        while True:
            ptop+=1
            if ptop>=len(p): 
                
            if p[ptop]=='*':
                index1