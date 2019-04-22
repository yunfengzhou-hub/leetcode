class Solution {
public:
    int prime(int n){
        for(int i=2;i<ceil(n/2.0);i++){
            if(n%i==0)  return i;
        }
        return n;
    }
    int minSteps(int n) {
        int step=0,temp;
        while(n>1){
            temp=prime(n);
            if(temp==n){
                step+=temp;
                break;
            }
            step+=temp;
            n/=temp;
        }
        return step;
    }
};
