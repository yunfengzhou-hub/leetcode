class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid):
        if len(obstacleGrid)<2 or len(obstacleGrid[0])<2: return 1
        pathnum=[[0 for _ in range(len(obstacleGrid[0]))] for _ in range(len(obstacleGrid))]
        pathnum[0][0]=1
        for i in range(1,len(obstacleGrid[0])):
            if obstacleGrid[0][i]!=1: pathnum[0][i]=pathnum[0][i-1]
        
        for i in range(1,len(obstacleGrid)):
            if obstacleGrid[i][0]!=1: pathnum[i][0]=pathnum[i-1][0]
        
        for i in range(1,len(obstacleGrid)):
            for j in range(1,len(obstacleGrid[0])):
                if obstacleGrid[i][j]!=1: pathnum[i][j]=pathnum[i-1][j]+pathnum[i][j-1]
        
        return pathnum[-1][-1]

mysolution=Solution()
matrix=[
  [0,0],
  [1,1],
  [0,0]
]
print(mysolution.uniquePathsWithObstacles(matrix))