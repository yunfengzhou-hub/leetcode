#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        /*int i,sum=0;
        for(i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return sum-(nums.size()-1)*nums.size()/2;*/
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1])
                return nums[i];
        }
    }
};

int main(void){
    return 0;
}
