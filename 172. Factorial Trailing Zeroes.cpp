class Solution {
public:
    int trailingZeroes(int n) {
        int num2=0,num5=0,temp;
        temp=n;
        while(temp>=2){
            num2+=temp/2;
            temp/=2;
        }
        temp=n;
        while(temp>=5){
            num5+=temp/5;
            temp/=5;
        }
        return min(num2,num5);
    }
};
