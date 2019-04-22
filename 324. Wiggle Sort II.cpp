class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        vector<int> sorted=nums;
        sort(sorted.begin(),sorted.end());
        int i=0,j=nums.size()-1,k=0;
        while(j>i){
            nums[k++]=sorted[i++];
            if(i>=j) break;
            nums[k++]=sorted[j--];
        }
    }
};
