class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t s=0;
        int i;
        for(i=0;i<32;i++){
            s<<=1;
            s+=(n>>i)&1;
        }
        return s;
    }
};
