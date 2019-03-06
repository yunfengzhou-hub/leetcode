class Solution:
    def gameOfLife(self, board: List[List[int]]) -> None:
        """
        Do not return anything, modify board in-place instead.
        """
        board2=[[0 for _ in range(len(board[0])+2)] for _ in range(len(board)+2)]
        for i in range(len(board)):
            for j in range(len(board[0])):
                board2[i+1][j+1]=board[i][j]
        for i in range(1,len(board2)-1):
            for j in range(1,len(board2[0])-1):
                neighbor=0
                neighbor+=board2[i-1][j-1]
                neighbor+=board2[i-1][j+1]
                neighbor+=board2[i-1][j]
                neighbor+=board2[i+1][j-1]
                neighbor+=board2[i+1][j+1]
                neighbor+=board2[i+1][j]
                neighbor+=board2[i][j-1]
                neighbor+=board2[i][j+1]
                if board2[i][j]==1 and (neighbor<2 or neighbor>3):
                    board[i-1][j-1]=0
                if board2[i][j]==0 and neighbor==3:
                    board[i-1][j-1]=1