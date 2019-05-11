class Solution {
public:
    int hammingWeight(uint32_t n) {
        int i,num=0;
        for(i=0;i<32;i++){
            num+=(n>>i)&1;
        }
        return num;
    }
};
