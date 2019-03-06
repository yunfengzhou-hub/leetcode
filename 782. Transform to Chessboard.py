class Solution:
    def movesToChessboard(self, board: List[List[int]]) -> int:
        if sum(board[0])!=int(len(board[0])/2) and sum(board[0])!=int((len(board[0])+1)/2): 
            return -1
        if sum([x[0] for x in board])!=int(len(board[0])/2) \
        and sum([x[0] for x in board])!=int((len(board[0])+1)/2): 
            return -1
        for i in range(1,len(board)):
            if board[0][0]==board[i][0]:
                for j in range(1,len(board[0])):
                    if board[0][j]!=board[i][j]: return -1
            if board[0][0]!=board[i][0]:
                for j in range(1,len(board[0])):
                    if board[0][j]==board[i][j]: return -1
        
        
        if len(board)%2==0:
            cross=[]
            for i in range(len(board)):
                cross.append(i%2)
            row1=0
            row2=0
            col1=0
            col2=0
            for i in range(len(board)):
                if board[0][i]==cross[i]:
                    row1+=1
                else:
                    row2+=1
                if board[i][0]==cross[i]:
                    col1+=1
                else:
                    col2+=1
            return int(min(col1,col2)/2)+int(min(row1,row2)/2)
        else:
            cross=[]
            if sum(board[0])==int(len(board[0])/2):
                for i in range(len(board)):
                    cross.append(i%2)
            else:
                for i in range(len(board)):
                    cross.append(1-i%2)
            row=0
            col=0
            
            if board[0][0]==cross[0]:
                for i in range(len(board)):
                    if board[0][i]!=cross[i]:
                        row+=1
                    if board[i][0]!=cross[i]:
                        col+=1
            else:
                for i in range(len(board)):
                    if board[0][i]==cross[i]:
                        row+=1
                    if board[i][0]==cross[i]:
                        col+=1
            return int(col/2+row/2)