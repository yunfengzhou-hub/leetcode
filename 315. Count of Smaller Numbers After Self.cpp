class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        vector<int> nums2,res(nums.size(),0);
        int start,finish,middle,current;
        if(nums.size()<2){
            if(nums.size()==1)
                nums2.push_back(0);
            return nums2;
        }
        nums2.push_back(nums[nums.size()-1]);
        for(int i=nums.size()-2;i>=0;i--){
            current=nums[i];
            start=0;
            finish=nums2.size()-1;
            while(finish-start>1){
                middle=(finish+start)/2;
                if(nums2[middle]>=current)
                    finish=middle;
                else
                    start=middle;
            }
            //cout<<start<<finish<<' ';
            if(nums2[finish]<current)
                middle=finish+1;
            else if(nums2[start]<current)
                middle=finish;
            else
                middle=start;
            nums2.insert(nums2.begin()+middle,current);
            res[i]=middle;
            /*for(int j=0;j<nums2.size();j++){
                cout<<nums2[j];
            }cout<<' ';*/
        }
        return res;
    }
};
