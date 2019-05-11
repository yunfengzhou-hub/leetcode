class Solution {
public:
    int hammingDistance(int x, int y) {
        int z=x^y,num=0;
        for(int i=0;i<32;i++){
            num+=(z>>i)&1;
        }
        return num;
    }
};
