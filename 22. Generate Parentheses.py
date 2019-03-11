class Solution:
    def mygenerate(self,temp):
        if self.right<1:
            self.result.append(temp)
        if self.left>0:
            self.left-=1
            self.mygenerate(temp+'(')
            self.left+=1
        if self.right>self.left:
            self.right-=1
            self.mygenerate(temp+')')
            self.right+=1
    def generateParenthesis(self, n: int) -> List[str]:
        self.left=n
        self.right=n
        self.result=[]
        self.mygenerate('')
        return self.result