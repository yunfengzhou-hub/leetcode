#include <vector>
#include <iostream>
#include <utility>

using namespace std;

#define NEVER -1
#define VACANT -2
#define CURRENT -3

//enum class State {NEVER,VACANT,OCCUPY};

//State s = State::Never;
class Solution {
public:
    vector<vector<bool> > relations;
    vector<vector<char> > cando;
    vector<vector<char> > myboard;
    Solution(void){
        vector<bool> tempvector(81,false);
        relations.assign(81,tempvector);

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                for(int k=0;k<9;k++){
                    relations[9*i+j][9*i+k]=true;
                    relations[9*i+j][9*k+j]=true;
                }
            }

        }

        for(int i=0;i<9;i+=3){

            for(int j=0;j<9;j+=3){
                for(int k=0;k<3;k++){
                    for(int l=0;l<3;l++){
                        relations[9*i+j][9*(i+k)+j+l]=true;
                        relations[9*i+j+2][9*(i+k)+j+l]=true;
                        relations[9*i+j+1][9*(i+k)+j+l]=true;
                        relations[9*i+j+10][9*(i+k)+j+l]=true;
                        relations[9*i+j+11][9*(i+k)+j+l]=true;
                        relations[9*i+j+9][9*(i+k)+j+l]=true;
                        relations[9*i+j+19][9*(i+k)+j+l]=true;
                        relations[9*i+j+20][9*(i+k)+j+l]=true;
                        relations[9*i+j+18][9*(i+k)+j+l]=true;
                    }
                }
            }
        }

        /*for(int i=0;i<81;i++){
            for(int j=0;j<81;j++){
                cout<<(relations[i][j]?'X':'.')<<' ';
            }
            cout<<endl;
        }*/
    }

    bool myLoop(int top){
        int i,j;
        bool isfinished=false;

        /*for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                cout<<myboard[i][j]<<' ';
            }
            cout<<endl;
        }cout<<endl;*/

         /*for(i=0;i<cando.size();i++){
            for(j=0;j<10;j++){
                cout<<int(cando[i][j])<<' ';
            }
            cout<<endl;
        }cout<<endl;*/

        //cout<<top<<endl;


        if(top>=cando.size()){
            for(i=0;i<cando.size();i++){
                for(j=9;j>0;j--){
                    if(cando[i][j]==CURRENT)
                        break;
                }
                myboard[cando[i][0]/9][cando[i][0]%9]=j+48;
            }
            /*for(i=0;i<cando.size();i++){
                for(j=0;j<10;j++){
                    cout<<int(cando[i][j])<<' ';
                }
                cout<<endl;
            }*/
            return true;
        }

        for(i=1;i<10;i++){
            //cout<<i<<' ';
            if(cando[top][i]==VACANT){
                //cout<<endl;
                //cout<<i<<' ';
                cando[top][i]=CURRENT;
                for(j=cando.size()-1;j>top;j--){
                    if(relations[cando[top][0]][cando[j][0]]&&cando[j][i]==VACANT)
                        cando[j][i]=top;
                }
                isfinished=myLoop(top+1);
                if(isfinished) break;
                for(j=cando.size()-1;j>top;j--){
                    if(relations[cando[top][0]][cando[j][0]]&&cando[j][i]==top){
                        cando[j][i]=VACANT;
                        //cout<<endl;
                    }

                }
                cando[top][i]=VACANT;
            }
            if(isfinished) break;
        }
        return isfinished;
    }

    void solveSudoku(vector<vector<char> >& board) {
        vector<char> tempvector(10,0);
        myboard=board;
        int i,j,k,l,temp1,temp2;
        for(i=0;i<9;i++){
            for(j=0;j<9;j++){
                if(board[i][j]=='.'){
                    tempvector[0]=9*i+j;
                    for(k=1;k<10;k++){
                        tempvector[k]=VACANT;
                    }
                    for(k=0;k<9;k++){
                        if(board[i][k]!='.'){
                            tempvector[board[i][k]-48]=NEVER;
                        }
                        if(board[k][j]!='.'){
                            tempvector[board[k][j]-48]=NEVER;
                        }
                    }
                    /*for(k=0;k<10;k++){
                        cout<<int(tempvector[k])<<' ';
                    }
                    cout<<endl;*/
                    temp1=i/3;
                    temp2=j/3;
                    for(k=temp1*3;k<temp1*3+3;k++){
                        for(l=temp2*3;l<temp2*3+3;l++){
                            if(board[k][l]!='.')
                                tempvector[board[k][l]-48]=NEVER;
                        }
                    }
                    cando.push_back(tempvector);
                }
            }
        }
        /*for(i=0;i<cando.size();i++){
            for(j=0;j<10;j++){
                cout<<int(cando[i][j])<<' ';
            }
            cout<<endl;
        }*/
        //cout<<true;


        myLoop(0);
        board.assign(myboard.begin(),myboard.end());
        return;
    }
};

int main(void){
    Solution my;
    vector<char> temp;
    char boardchar[9][9]={\
    {'5','3','.','.','7','.','.','.','.'},\
    {'6','.','.','1','9','5','.','.','.'},\
    {'.','9','8','.','.','.','.','6','.'},\
    {'8','.','.','.','6','.','.','.','3'},\
    {'4','.','.','8','.','3','.','.','1'},\
    {'7','.','.','.','2','.','.','.','6'},\
    {'.','6','.','.','.','.','2','8','.'},\
    {'.','.','.','4','1','9','.','.','5'},\
    {'.','.','.','.','8','.','.','7','9'}\
    };
    vector<vector<char>> board;
    for(int i=0;i<9;i++){
        board.push_back(temp);
        for(int j=0;j<9;j++){
            board[i].push_back(boardchar[i][j]);
        }
    }



    //my.Solution();
    my.solveSudoku(board);
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            cout<<board[i][j]<<' ';
        }
        cout<<endl;
    }

    //cout<<true;
    return 0;
}
