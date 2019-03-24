#include <math.h>
class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int csize=citations.size();
        int i;
        for(i=0;i<csize;i++){
            if(citations[i]>=csize-i)
                break;
        }
        return csize-i;
    }
};
