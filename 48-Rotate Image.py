class Solution:
    def swap(self,matrix,x1,y1,x2,y2):
        a=matrix[x1][y1]
        matrix[x1][y1]=matrix[x2][y2]
        matrix[x2][y2]=a
    def rotate(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        for i in range(int(len(matrix)/2)):
            for j in range(len(matrix[0])):
                self.swap(matrix,i,j,len(matrix)-1-i,j)
        
        for i in range(len(matrix)):
            for j in range(i+1):
                self.swap(matrix,i,j,j,i)