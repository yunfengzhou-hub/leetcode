class Solution:
    def minPathSum(self, grid):
        if len(grid[0])<1 or len(grid)<1: return 0
        stepnum=[[0 for _ in range(len(grid[0]))] for _ in range(len(grid))]
        stepnum[0][0]=grid[0][0]
        for i in range(1,len(grid)): stepnum[i][0]=grid[i][0]+stepnum[i-1][0]
        
        for i in range(1,len(grid[0])): stepnum[0][i]=grid[0][i]+stepnum[0][i-1]
        
        for i in range(1,len(grid)):
            for j in range(1,len(grid[0])):
                stepnum[i][j]=grid[i][j]+min(stepnum[i-1][j],stepnum[i][j-1])
        return stepnum[-1][-1]

mysolution=Solution()
grid=[
  [1,3,1],
  [1,5,1],
  [4,2,1]
]
print(mysolution.minPathSum(grid))