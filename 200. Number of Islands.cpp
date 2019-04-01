#include <vector>
#include <iostream>
#include <queue>


using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char> >& grid) {
        if(grid.size()==0||grid[0].size()==0)
            return 0;
        int num=0,i,j,x,y;
        vector<char> row(grid[0].size()+2,'0');
        vector<vector<char> > grid2(grid.size()+2,row);
        queue<int> xindex,yindex;

        for(i=0;i<grid.size();i++){
            for(j=0;j<grid[0].size();j++){
                grid2[i+1][j+1]=grid[i][j];
            }
        }
        cout<<grid.size()<<endl;

        /*for(int i1=0;i1<grid2.size();i1++){
            for(int j1=0;j1<grid2[0].size();j1++){
                cout<<grid2[i1][j1];
            }
            cout<<endl;
        }cout<<endl;*/

        for(i=0;i<grid2.size();i++){
            for(j=0;j<grid2[0].size();j++){
                //cout<<grid2[i][j];
                if(grid2[i][j]=='1'){
                    /*for(int i1=0;i1<grid2.size();i1++){
                        for(int j1=0;j1<grid2[0].size();j1++){
                            cout<<grid2[i1][j1];
                        }
                        cout<<endl;
                    }cout<<endl;*/

                    num++;
                    xindex.push(i);
                    yindex.push(j);
                    while(xindex.size()>0){

                        x=xindex.front();
                        cout<<x<<endl;
                        y=yindex.front();
                        grid2[x][y]='3';
                        if(grid2[x-1][y]=='1'){
                            xindex.push(x-1);
                            yindex.push(y);
                        }
                        if(grid2[x+1][y]=='1'){
                            xindex.push(x+1);
                            yindex.push(y);
                        }
                        if(grid2[x][y-1]=='1'){
                            xindex.push(x);
                            yindex.push(y-1);
                        }
                        if(grid2[x][y+1]=='1'){
                            xindex.push(x);
                            yindex.push(y+1);
                        }
                        xindex.pop();
                        yindex.pop();
                    }
                }
            }
        }
        return num;
    }
};
int main(void){
    char grid0[20][20]={\
    {'1','1','1','1','1','0','1','1','1','1','1','1','1','1','1','0','1','0','1','1'},\
    {'0','1','1','1','1','1','1','1','1','1','1','1','1','0','1','1','1','1','1','0'},\
    {'1','0','1','1','1','0','0','1','1','0','1','1','1','1','1','1','1','1','1','1'},\
    {'1','1','1','1','0','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},\
    {'1','0','0','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},\
    {'1','0','1','1','1','1','1','1','0','1','1','1','0','1','1','1','0','1','1','1'},\
    {'0','1','1','1','1','1','1','1','1','1','1','1','0','1','1','0','1','1','1','1'},\
    {'1','1','1','1','1','1','1','1','1','1','1','1','0','1','1','1','1','0','1','1'},\
    {'1','1','1','1','1','1','1','1','1','1','0','1','1','1','1','1','1','1','1','1'},\
    {'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},\
    {'0','1','1','1','1','1','1','1','0','1','1','1','1','1','1','1','1','1','1','1'},\
    {'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},\
    {'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},\
    {'1','1','1','1','1','0','1','1','1','1','1','1','1','0','1','1','1','1','1','1'},\
    {'1','0','1','1','1','1','1','0','1','1','1','0','1','1','1','1','0','1','1','1'},\
    {'1','1','1','1','1','1','1','1','1','1','1','1','0','1','1','1','1','1','1','0'},\
    {'1','1','1','1','1','1','1','1','1','1','1','1','1','0','1','1','1','1','0','0'},\
    {'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},\
    {'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'},\
    {'1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1','1'}};
    /*char grid0[5][5]={\
    {'1','1','1','0','1'},\
    {'1','1','0','1','1'},\
    {'1','1','0','1','1'},\
    {'1','1','0','1','1'},\
    {'1','1','1','0','1'},\
    };*/


    vector<char> temp;
    vector<vector<char> > grid;
    for(int i=0;i<20;i++){
        grid.push_back(temp);
        for(int j=0;j<20;j++){
            grid[i].push_back(grid0[i][j]);
        }
    }
    Solution my;
    cout<<my.numIslands(grid)<<endl;
}
