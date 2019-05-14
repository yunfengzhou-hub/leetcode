class Solution {
public:
    vector<int> num;
    int findNextGreater(int target){
        if(target>=num[num.size()-1]) return -1;
        int start=0,finish=num.size()-1,middle;
        while(finish-start>1){
            middle=(start+finish)/2;
            if(num[middle]>target){
                finish=middle;
            }else{
                start=middle;
            }
        }if(num[start]>target){
            return start;
        }else{
            return finish;
        }
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result(nums1.size(),-1);
        int i,j,temp;
        for(i=nums1.size();i<nums2.size();i++){
            num.push_back(nums2[i]);
        }
        sort(num.begin(),num.end());
        for(i=nums1.size()-1;i>=0;i--){
            /*cout<<i;
            temp=findNextGreater(nums1[i]);
            if(temp<0){
                result[i]=-1;
            }else{
                result[i]=num[temp];
            }

            temp=findNextGreater(nums2[i]);
            if(temp<0){
                temp=num.size();
            }
            num.insert(num.begin()+temp,nums2[i]);*/
            for(j=i;j<nums2.size();j++){
                if(nums2[j]>nums1[i]){
                    result[i]=nums2[j];
                    break;
                }
            }
        }
        return result;
    }
};
