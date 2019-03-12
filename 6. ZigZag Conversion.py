class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if numRows<2: return s
        result=['' for _ in range(numRows)]
        top=0
        while True:
            for i in range(numRows-1):
                result[i]+=s[top]
                top+=1
                if top>=len(s): break
            if top>=len(s): break
            for i in range(numRows-1,0,-1):
                result[i]+=s[top]
                top+=1
                if top>=len(s): break
            if top>=len(s): break
        result2=''
        for i in range(numRows):
            result2+=result[i]
        return result2