class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {

        cout<<nums1.size()<<'+'<<nums2.size()<<'-';

        if(nums1.size()<1) return nums2;
        if(nums2.size()<1) return nums1;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        //cout<<nums1.size()<<'+'<<nums2.size()<<'-';
        int i,j;
        i=0;
        while(i<nums1.size()-1){
            cout<<'['<<i<<']';
            if(nums1[i]==nums1[i+1]){
                nums1.erase(nums1.begin()+i,nums1.begin()+i+1);
            }else{
                i++;
            }
        }
        cout<<nums1.size()<<'+'<<nums2.size()<<'-';
        i=0;
        while(i<nums2.size()-1){
            if(nums2[i]==nums2[i+1]){
                nums2.erase(nums2.begin()+i,nums2.begin()+i+1);
            }else{
                i++;
            }
        }
        /*for(i=0;i<nums1.size();i++){
            cout<<nums1[i]<<' ';
        }
        cout<<nums1.size();*/
        i=0;
        j=0;
        vector<int> result;
        while(i<nums1.size()&&j<nums1.size()){
            if(nums1[i]>nums2[j])
                j++;
            else if(nums1[i]<nums2[j])
                i++;
            else{
                result.push_back(nums1[i]);
                i++;
                j++;
            }
        }
        return result;
    }
};
