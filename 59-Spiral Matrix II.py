class Solution:
    def generateMatrix(self, n: int) -> List[List[int]]:
        if n==1: return [[1]]
        
        result=[[0 for _ in range(n)] for _ in range(n)]
        
        topline=0
        bottomline=n-1
        rightline=n-1
        leftline=0
        current=1
        
        while True:
            for i in range(leftline,rightline+1):
                result[topline][i]=current
                current+=1
            topline+=1
            if topline > bottomline: break
            
            for i in range(topline,bottomline+1):
                result[i][rightline]=current
                current+=1
            rightline-=1
            if rightline < leftline: break
             
            for i in range(rightline,leftline-1,-1):
                result[bottomline][i]=current
                current+=1
            bottomline-=1
            if topline > bottomline: break
            
            for i in range(bottomline,topline-1,-1):
                result[i][leftline]=current
                current+=1
            leftline+=1
            if rightline < leftline: break
        
        return result