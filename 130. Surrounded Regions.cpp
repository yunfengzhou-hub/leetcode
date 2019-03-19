class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if(board.size()<1||board[0].size()<1)
            return;

        queue<int> q1,q2;
        vector<int>boardsize;
        int i,j;

        boardsize.push_back(board.size()-1);
        boardsize.push_back(board[0].size()-1);
        for(i=0;i<=boardsize[0];i++){
            if(board[i][0]=='O'){
                board[i][0]='T';
                q1.push(i);
                q2.push(0);
            }
            if(board[i][boardsize[1]]=='O'){
                board[i][boardsize[1]]='T';
                q1.push(i);
                q2.push(boardsize[1]);
            }
        }
        for(j=0;j<=boardsize[1];j++){
            if(board[0][j]=='O'){
                board[0][j]='T';
                q1.push(0);
                q2.push(j);
            }
            if(board[boardsize[0]][j]=='O'){
                board[boardsize[0]][j]='T';
                q1.push(boardsize[0]);
                q2.push(j);
            }
        }

        while(!q1.empty()){
            i=q1.front();
            j=q2.front();
            if(i>0&&board[i-1][j]=='O'){
                board[i-1][j]='T';
                q1.push(i-1);
                q2.push(j);
            }
            if(i<boardsize[0]&&board[i+1][j]=='O'){
                board[i+1][j]='T';
                q1.push(i+1);
                q2.push(j);
            }
            if(j>0&&board[i][j-1]=='O'){
                board[i][j-1]='T';
                q1.push(i);
                q2.push(j-1);
            }
            if(j<boardsize[1]&&board[i][j+1]=='O'){
                board[i][j+1]='T';
                q1.push(i);
                q2.push(j+1);
            }
            q1.pop();
            q2.pop();
        }

        for(i=0;i<=boardsize[0];i++){
            for(j=0;j<=boardsize[1];j++){
                if(board[i][j]=='O')
                    board[i][j]='X';
                if(board[i][j]=='T')
                    board[i][j]='O';
            }
        }
    }
};
