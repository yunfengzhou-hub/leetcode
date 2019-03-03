class Solution:
    def find(self):
        if self.top>=len(self.word): return True
        
        self.x=self.index[self.top-1][0]-1
        self.y=self.index[self.top-1][1]
        if self.x>=0 and [self.x,self.y] not in self.index and self.board[self.x][self.y]==self.word[self.top]:
            self.index[self.top]=[self.x,self.y]
            self.top+=1
            if self.find(): return True
            self.top-=1
            self.index[self.top]=[-1,-1]
        
        self.x=self.index[self.top-1][0]+1
        self.y=self.index[self.top-1][1]
        if self.x<len(self.board) and [self.x,self.y] not in self.index and self.board[self.x][self.y]==self.word[self.top]:
            self.index[self.top]=[self.x,self.y]
            self.top+=1
            if self.find(): return True
            self.top-=1
            self.index[self.top]=[-1,-1]
        
        self.x=self.index[self.top-1][0]
        self.y=self.index[self.top-1][1]+1
        if self.y<len(self.board[0]) and [self.x,self.y] not in self.index and self.board[self.x][self.y]==self.word[self.top]:
            self.index[self.top]=[self.x,self.y]
            self.top+=1
            if self.find(): return True
            self.top-=1
            self.index[self.top]=[-1,-1]
        
        self.x=self.index[self.top-1][0]
        self.y=self.index[self.top-1][1]-1
        if self.y>=0 and [self.x,self.y] not in self.index and self.board[self.x][self.y]==self.word[self.top]:
            self.index[self.top]=[self.x,self.y]
            self.top+=1
            if self.find(): return True
            self.top-=1
            self.index[self.top]=[-1,-1]
        
        return False
    def exist(self, board, word):
        self.index=[[-1,-1] for _ in range(len(word))]
        self.board=board
        self.top=0
        self.word=word
        self.x=0
        self.y=0
        for i in range(len(board)):
            for j in range(len(board[0])):
                if board[i][j]==word[0]:
                    
                    self.index[0]=[i,j]
                    self.top=1
                    if self.find(): return True
        return False

mysolution=Solution()
board=[["A","B","C","E"],
       ["S","F","C","S"],
       ["A","D","E","E"]]
word="ABCCED"
print(mysolution.exist(board,word))