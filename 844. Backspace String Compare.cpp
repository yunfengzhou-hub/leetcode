class Solution {
public:
    bool backspaceCompare(string S, string T) {
        int i=0;
        while(i<S.length()){
            if(S[i]=='#'){
                S.erase(i,1);
                if(i>0){
                    S.erase(i-1,1);
                    i--;
                }
            }else{
                i++;
            }
        }
        i=0;
        while(i<T.length()){
            if(T[i]=='#'){
                T.erase(i,1);
                if(i>0){
                    T.erase(i-1,1);
                    i--;
                }
            }else{
                i++;
            }
        }
        //cout<<S<<' '<<T;
        return S==T;
    }
};
