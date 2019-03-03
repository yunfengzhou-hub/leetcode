class Solution:
    def calculateMinimumHP(self, dungeon):
        health=[[0 for _ in range(len(dungeon[0]))] for _ in range(len(dungeon))]
        health[-1][-1]=max(-dungeon[-1][-1],0)+1
        
        for i in range(len(dungeon)-2,-1,-1):
            health[i][-1]=max(health[i+1][-1]-dungeon[i][-1],1)
        
        for j in range(len(dungeon[0])-2,-1,-1):
            health[-1][j]=max(health[-1][j+1]-dungeon[-1][j],1)
        
        for i in range(len(dungeon)-2,-1,-1):
            for j in range(len(dungeon[0])-2,-1,-1):
                health[i][j]=max(min(health[i+1][j],health[i][j+1])-dungeon[i][j],1)
        
        return  health[0][0]

mysolution=Solution()
dungeon=[[-2,-3,3],[-5,-10,1],[10,30,-5]]
print(mysolution.calculateMinimumHP(dungeon))