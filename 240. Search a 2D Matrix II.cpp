class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()<1||matrix[0].size()<1) return false;
        int si,sj,fi,fj,st,ft,m;
        int msize[2]={matrix.size()-1,matrix[0].size()-1};
        si=0;
        sj=0;
        fi=msize[0];
        fj=msize[1];
        while(fi-si>1||fj-sj>1){
            if(matrix[si][sj]==target||matrix[fi][sj]==target||matrix[si][fj]==target||matrix[fi][fj]==target) break;

            //cout<<si<<' '<<fi<<' '<<sj<<' '<<fj<<endl;
            st=si;
            ft=fi;
            while(ft-st>1){
                m=(ft+st)/2;
                if(matrix[m][fj]<target)
                    st=m;
                else
                    ft=m;
            }
            if(matrix[st][fj]<target)
                si=ft;
            else
                si=st;

            st=si;
            ft=fi;
            while(ft-st>1){
                m=(ft+st)/2;
                if(matrix[m][sj]<target)
                    st=m;
                else
                    ft=m;
            }
            if(matrix[ft][sj]>target)
                fi=st;
            else
                fi=ft;

            st=sj;
            ft=fj;
            while(ft-st>1){
                m=(ft+st)/2;
                if(matrix[fi][m]<target)
                    st=m;
                else
                    ft=m;
            }
            if(matrix[fi][st]<target)
                sj=ft;
            else
                sj=st;

            st=sj;
            ft=fj;
            while(ft-st>1){
                m=(ft+st)/2;
                if(matrix[si][m]<target)
                    st=m;
                else
                    ft=m;
            }
            if(matrix[si][ft]>target)
                fj=st;
            else
                fj=ft;
        }
        return matrix[si][sj]==target||matrix[fi][sj]==target||matrix[si][fj]==target||matrix[fi][fj]==target;
    }
};
