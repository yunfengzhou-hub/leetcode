class Solution:
    def divide(self, dividend: int, divisor: int) -> int:
#        if (dividend>0 and divisor<0) or (dividend<0 and divisor>0):
#            sign=-1
#        else:
#            sign=1
#        if dividend<0: dividend=-dividend
#        if divisor<0: divisor=-divisor
#        num=0
#        while True:
#            if dividend<divisor: break
#            dividend-=divisor
#            num+=1
#        num*=sign
#        num=min(num,2**31-1)
#        num=max(num,-2**31)
#        return num
        sign=(divisor/abs(divisor))*dividend
        if dividend!=0:
            sign/=abs(dividend)
        result=int(abs(dividend)//abs(divisor)*sign)
        result=min(result,2**31-1)
        result=max(result,-2**31)
        return result