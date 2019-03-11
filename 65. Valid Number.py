class Solution:
    def isNumber(self, s: str) -> bool:
        s=list(s)
        for i in range(len(s)):
            if s[i]==' ':
                s.remove(' ')
                break
        havenum=False
        havedot=False
        havee=False
        havesign=False
        for i in range(len(s)):
            if s[i] not in {'+','-','e','.'} and not s[i].isdigit():
                return False
            if s[i] in {'+','-'}:
                if not havee:
                    if havenum or havesign or havedot: return False
                else:
                    if s[i-1]!='e': return False
                havesign=True
            if s[i]=='e':
                if not havenum or havee or i==0 or s[i-1] in {'+','-','.'}:
                    return False
                if i==len(s)-1 or (s[i+1] not in {'+','-'} and not s[i+1].isdigit()):
                    return False
                havee=True
            if s[i]=='.':
                if havedot or havee or s[i-1] in {'+','-'}:
                    return False
                havedot=True
            if s[i].isdigit():
                havenum=True
        if havenum: return True
        else: return False