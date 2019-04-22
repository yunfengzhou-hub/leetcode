/*class Solution {
public:
    int brokenCalc(int X, int Y) {
        vector<int> ys;
        unsigned int i,j,step;
        for(i=0;i<=X;i++)
            ys.push_back(X-i);
        for(;i<=Y;i++){
            step=-1;
            for(j=ceil(i/2.0);j<i;j++){
                step=min(step,ys[j]+1+2*j-i);
                //cout<<j<<' ';
            }
            ys.push_back(step);
        }
        for(i=0;i<=Y;i++)
            cout<<ys[i]<<' ';
        return ys[Y];
    }
};*/

class Solution {
public:
    int brokenCalc(int X, int Y) {
        if(X>=Y) return X-Y;
        int step=0,i;
        while(X<Y){
            X*=2;
            step++;
        }
        X-=Y;
        //cout<<X<<' ';
        for(i=step;i>0;i--){
            step+=(X&1);
            X>>=1;
            //cout<<X<<' ';
        }
        step+=X;
        return step;
    }
};
