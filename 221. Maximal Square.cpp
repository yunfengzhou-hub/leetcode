class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.size()<1||matrix[0].size()<1) return 0;
        int i,j,k,square=0;
        vector<int> temp(matrix[0].size(),0);
        vector<vector<int>> matrixnum(matrix.size(),temp);

        for(i=0;i<matrix.size();i++){
            for(j=0;j<matrix[0].size();j++){
                matrixnum[i][j]=matrix[i][j]-48;
            }
        }

        for(i=1;i<matrix.size();i++){
            matrixnum[i][0]+=matrixnum[i-1][0];
        }
        for(i=1;i<matrix[0].size();i++){
            matrixnum[0][i]+=matrixnum[0][i-1];
        }

        for(i=1;i<matrixnum.size();i++){
            for(j=1;j<matrixnum[0].size();j++){
                matrixnum[i][j]=matrixnum[i][j]+matrixnum[i][j-1]+matrixnum[i-1][j]-matrixnum[i-1][j-1];
            }
        }
        for(i=0;i<matrixnum.size();i++){
            for(j=0;j<matrixnum[0].size();j++){
                cout<<matrixnum[i][j];
            }cout<<endl;
        }
        for(i=0;i<matrixnum.size();i++){
            for(j=0;j<matrixnum[0].size();j++){
                for(k=min(matrixnum.size()-i,matrixnum[0].size()-j)-1;k>=0;k--){
                    if(matrixnum[i+k][j+k]+matrixnum[i][j]-matrixnum[i][j+k]-matrixnum[i+k][j]+1==k*k&&square<k*k){
                        square=k*k;
                        break;
                    }
                }
            }
        }
        return square;
    }
};
