class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        label=max(max(matrix))+1
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j]==0:
                    for k in range(len(matrix[0])):
                        if matrix[i][k]!=0:
                            matrix[i][k]=label
                    for k in range(len(matrix)):
                        if matrix[k][j]!=0:
                            matrix[k][j]=label
        for i in range(len(matrix)):
            for j in range(len(matrix[0])):
                if matrix[i][j]==label: matrix[i][j]=0
                        
#        i=0
#        j=0
#        while True:
#            for j1 in range(j,len(matrix[0])):
#                if matrix[i][j1]==0:
#                    for k in range(len(matrix[0])):
#                        matrix[i][k]=0
#                    break
#            i+=1
#            if i>=len(matrix): break
#            
#            for i1 in range(i,len(matrix)):
#                if matrix[i1][j]==0:
#                    for k in range(len(matrix)):
#                        matrix[k][j]=0
#                    break
#            j+=1
#            if j>len(matrix[0]): break