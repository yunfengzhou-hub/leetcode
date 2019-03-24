// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int start=1,finish=n,middle;
        while(finish-start>1){
            middle=(start+finish)/2;
            if(isBadVersion(middle))
                finish=middle;
            else
                start=middle;
        }
        if(isBadVersion(start))
            return start;
        return finish;
    }
};
