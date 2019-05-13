#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<long> mystack;
    int top=0;
    int binarySearch(long target,bool islast){

        long start,finish,middle;
        int result;
        start=0;
        finish=top;
        if(islast){
            if(mystack[0]>target) return -1;
            if(mystack[top]<target) return top;
            while(finish-start>1){
                middle=(start+finish)/2;
                if(target<mystack[middle]){
                    finish=middle;
                }else{
                    start=middle;
                }
            }if(mystack[finish]<=target){
                result=finish;
            }else{
                result=start;
            }
        }else{
            if(mystack[0]>target) return 0;
            if(mystack[top]<target) return top+1;
            while(finish-start>1){
                middle=(start+finish)/2;
                if(target<=mystack[middle]){
                    finish=middle;
                }else{
                    start=middle;
                }
            }if(mystack[start]>=target){
                result=start;
            }else{
                result=finish;
            }
        }
        return result;


    }
    int reversePairs(vector<int>& nums) {
        if(nums.size()<2) return 0;
        long start,finish,counter=0,temp;
        //cout<<nums[4]<<endl;
        mystack.push_back(nums[nums.size()-1]);
        for(int i=nums.size()-2;i>=0;i--){
            temp=nums[i];
            start=binarySearch(temp+1,false);
            finish=binarySearch((temp-1)/2,true);
            counter+=finish+1;

            mystack.insert(mystack.begin()+start,temp);
            /*cout<<finish<<' '<<start<<'|';
            for(int j=0;j<mystack.size();j++){
                cout<<mystack[j]<<' ';
            }cout<<endl;*/
            top++;
        }
        return counter;
    }
};

int main(void){
    int b[5]={2,4,3,5,1};
    vector<int> a(b,b+5);
    Solution my;
    cout<<my.reversePairs(a)<<endl;

}
