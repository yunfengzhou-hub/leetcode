class Solution {
public:
    int uniquePathsIII(vector<vector<int>>& grid) {
        vector<vector<int>> chosen,tochoose;
        pair<int> goal,start;
        int i,j,G,H,minFindex,temp;
        for(i=0;i<grid.size();i++){
            for(j=0;j<grid[0].size();j++){
                if(grid[i][j]==1)
                    break;
            }
        }
        tochoose.push_back({i,j,0});
        start=make_pair(i,j);

        for(i=0;i<grid.size();i++){
            for(j=0;j<grid[0].size();j++){
                if(grid[i][j]==2)
                    break;
            }
        }
        goal=make_pair(i,j);

        tochoose[0][3]=abs(tochoose[0][1]-start.first)+abs(tochoose[0][2]-start.second)+\
            abs(tochoose[0][1]-goal.first)+abs(tochoose[0][2]-goal.second);
        while(tochoose.size()>0){
            /*minFindex=0;
            for(i=0;i<tochoose.size();i++){
                if(tochoose[i][3]<tochoose[minFindex][3])
                    minFindex
            }*/

        }
    }
};
