class Solution {
public:
    int countDigitOne(int n) {
        if(n<1) return 0;
        unsigned long num1=0,temp1,temp2;
        temp1=1;
        temp2=10;
        while(n>=temp1){
            num1+=(n/temp2)*temp1;
            if(n%temp2>=2*temp1){
                num1+=temp1;
            }else if(n%temp2>=temp1){
                num1+=n%temp2-temp1+1;
            }
            temp2*=10;
            temp1*=10;
        }
        return num1;
    }
};
