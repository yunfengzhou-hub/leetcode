class Solution:
    def myAppend(self):
        temp=[]
        for i in range(len(self.candidates)):
            for j in range(self.quotient[i]):
                temp.append(self.candidates[i])
        self.result.append(temp)
    def myMod(self,length,residue):
        self.quotient[length-1]=residue//self.candidates[length-1]
        if length==1:
            if residue%self.candidates[length-1]==0:
                self.myAppend()
        else:
            while self.quotient[length-1]>=0:
                self.myMod(length-1,residue-self.quotient[length-1]*self.candidates[length-1])
                self.quotient[length-1]-=1
        
    def combinationSum(self, candidates, target):
        self.candidates=candidates
        self.target=target
        self.quotient=[0 for _ in range(len(candidates))]
        self.result=list(list())
        self.myMod(len(candidates),target)
        return self.result
        

candidates = [2,3,6,7]
target = 7
mysolution=Solution()
print(mysolution.combinationSum(candidates,target))