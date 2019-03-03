class Solution:
    def searchMatrix(self, matrix, target):
        if len(matrix)==0 or len(matrix[0])==0:
            return False
        print(len(matrix))
        start=0
        end=len(matrix)-1
        center=int((start+end)/2)
        while start<center and end>center:
            if matrix[center][0]>target:
                end=center
            else:
                start=center
            center=int((start+end)/2)
        
        if matrix[start][0]>target: return False
        if matrix[end][0]>target:   row=start
        else:                       row=end
        
        start=0
        end=len(matrix[0])-1
        center=int((start+end)/2)
        while start<center and end>center:
            if matrix[row][center]>target:
                end=center
            else:
                start=center
            center=int((start+end)/2)
        if matrix[row][start]==target or matrix[row][end]==target: return True
        return False

mysolution=Solution()
#matrix=[
#  [1,   3,  5,  7],
#  [10, 11, 16, 20],
#  [23, 30, 34, 50]
#]
matrix=[[]]
print(mysolution.searchMatrix(matrix,3))