class Solution:
    def combinationSum3(self, k: int, n: int) -> List[List[int]]:
        binary=[0 for _ in range(9)]
        result=[]
        for i in range(2**9):
            for j in range(9):
                binary[j]=(i%(2**(j+1)))//(2**j)
            if sum(binary)==k:
                temp=[]
                for j in range(9):
                    if binary[j]>0:
                        temp.append(j+1)
                if sum(temp)==n:
                    result.append(temp)
        return result