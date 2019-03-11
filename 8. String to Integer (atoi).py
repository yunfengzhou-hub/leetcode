class Solution:
    def myAtoi(self, mystr: str) -> int:
        top=0
        while top<len(mystr) and mystr[top]==' ': top+=1
        if top>=len(mystr) or (mystr[top] not in {'+','-'} and \
                   not mystr[top].isdigit()): return 0
        sign=1
        if mystr[top] in {'+','-'}:
            if mystr[top]=='-':
                sign=-1
            top+=1
        if top>=len(mystr) or not mystr[top].isdigit(): return 0
        num=0
        while top<len(mystr) and mystr[top].isdigit():
            num*=10
            num+=int(mystr[top])
            top+=1
        num*=sign
        num=max(num,-2**31)
        num=min(num,2**31-1)
        return num