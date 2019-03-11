class Solution:
#    def _init_(self):
#        self.code=[['a','b','c']
#                ['d','e','f']
#                ['g','h','i']
#                ['j','k','l']
#                ['m','n','o']
#                ['p','q','r','s']
#                ['t','u','v']
#                ['w','x','y','z']]
    def mycomb(self,digits,temp):
        if len(digits)<1:
            self.result.append(temp)
        else:
            number=ord(digits[0])-50
            for i in range(len(self.code[number])):
#                temp+=self.code[number][i]
                self.mycomb(digits[1:],temp+self.code[number][i])
    def letterCombinations(self, digits: str) -> List[str]:
        if len(digits)<1: return []
        self.code=[['a','b','c'],
                ['d','e','f'],
                ['g','h','i'],
                ['j','k','l'],
                ['m','n','o'],
                ['p','q','r','s'],
                ['t','u','v'],
                ['w','x','y','z']]
        self.result=[]
        self.mycomb(digits,'')
        return self.result