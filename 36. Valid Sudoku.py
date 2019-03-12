class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        for i in range(9):
            nums=[0 for _ in range(9)]
            for j in range(9):
                if board[i][j]!='.':
                    nums[ord(board[i][j])-49]+=1
                    if nums[ord(board[i][j])-49]>1:
                        return False
        for i in range(9):
            nums=[0 for _ in range(9)]
            for j in range(9):
                if board[j][i]!='.':
                    nums[ord(board[j][i])-49]+=1
                    if nums[ord(board[j][i])-49]>1:
                        return False
        for i1 in range(3):
            for j1 in range(3):
                nums=[0 for _ in range(9)]
                for i in range(3):
                    for j in range(3):
                        if board[3*i1+i][3*j1+j]!='.':
                            nums[ord(board[3*i1+i][3*j1+j])-49]+=1
                            if nums[ord(board[3*i1+i][3*j1+j])-49]>1:
                                return False
        return True
                        
            
                