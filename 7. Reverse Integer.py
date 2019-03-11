class Solution:
    def reverse(self, x: int) -> int:
        y=0
        if x>=0: sign=1
        else: sign=-1
        x*=sign
        while x!=0:
            y*=10
            y+=x%10
            x//=10
        y*=int(sign)
        if y>2**31-1 or y<-2**31: y=0
        return y