class Solution:
    def spiralOrder(self, matrix):
        if len(matrix)<1:
            return matrix
        
        topline=0
        bottomline=len(matrix)-1
        rightline=len(matrix[0])-1
        leftline=0
        result=[]
        
        while True:
            for i in range(leftline,rightline+1):
                result.append(matrix[topline][i])
            topline+=1
            if topline > bottomline: break
            
            for i in range(topline,bottomline+1):
                result.append(matrix[i][rightline])
            rightline-=1
            if rightline < leftline: break
             
            for i in range(rightline,leftline-1,-1):
                result.append(matrix[bottomline][i])
            bottomline-=1
            if topline > bottomline: break
            
            for i in range(bottomline,topline-1,-1):
                result.append(matrix[i][leftline])
            leftline+=1
            if rightline < leftline: break
        
        return result

#a=[
#  [1, 2, 3, 4],
#  [5, 6, 7, 8],
#  [9,10,11,12]
#]
a=[]
mysolution=Solution()
print(mysolution.spiralOrder(a))