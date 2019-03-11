class Solution:
    def intToRoman(self, num: int) -> str:
        roman=''
        for i in range(num//1000):
            roman+='M'
        num%=1000
        
        if num//100==9:
            roman+='CM'
        elif num//100>4:
            roman+='D'
            for i in range(5,num//100):
                roman+='C'
        elif num//100==4:
            roman+='CD'
        else:
            for i in range(num//100):
                roman+='C'
        num%=100
        
        if num//10==9:
            roman+='XC'
        elif num//10>4:
            roman+='L'
            for i in range(5,num//10):
                roman+='X'
        elif num//10==4:
            roman+='XL'
        else:
            for i in range(num//10):
                roman+='X'
        num%=10
        
        if num==9:
            roman+='IX'
        elif num>4:
            roman+='V'
            for i in range(5,num):
                roman+='I'
        elif num==4:
            roman+='IV'
        else:
            for i in range(num):
                roman+='I'
        
        return roman