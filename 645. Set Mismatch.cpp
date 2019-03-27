//#include <algorithm>
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int two,zero,n=nums.size(),mysum=0;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                two=nums[i];
                break;
            }
        }
        for(int i=0;i<n;i++){
            mysum+=nums[i];
        }
        zero=two+((n+1)*n/2-mysum);
        vector<int> result;
        result.push_back(two);
        result.push_back(zero);
        return result;
    }
};
