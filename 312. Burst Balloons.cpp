#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    /*vector<int> balloons;
    int burst(int start,int finish){
        int tempmax=0;
        for(int i=start+1;i<finish;i++){
            tempmax=max(tempmax,burst(start,i)+burst(i,finish)+balloons[i]*balloons[start]*balloons[finish]);
        }
        //cout<<start<<' '<<finish<<' '<<tempmax<<endl;
        return tempmax;
    }
    int maxCoins(vector<int>& nums) {
        balloons.push_back(1);
        for(vector<int>::iterator it=nums.begin();it<nums.end();it++)
            balloons.push_back(*it);
        //balloons.insert(balloons.end(),nums,nums+nums.size());
        balloons.push_back(1);
        return burst(0,balloons.size()-1);
    }*/
    vector<vector<int> > balloons;
    /*void display(){
        int i,j;
        for(i=0;i<balloons.size();i++){
            for(j=0;j<balloons.size();j++){
                cout<<balloons[i][j]<<' ';
            }cout<<endl;
        }cout<<endl;
    }*/

    int maxCoins(vector<int>& nums) {
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        vector<int> temp(nums.size(),0);
        int i,j,k;
        for(i=0;i<nums.size();i++){
            balloons.push_back(temp);
        }
        for(i=2;i<balloons.size();i++){
            for(j=0;j<balloons.size()-i;j++){
                for(k=j+1;k<j+i;k++){
                    balloons[j][j+i]=max(balloons[j][j+i],balloons[j][k]+balloons[k][j+i]+nums[j+i]*nums[k]*nums[j]);
                }
                //display();
            }
        }

        return balloons[0][balloons.size()-1];
    }
};

int main(void){
    int mylist[4]={3,1,5,8};
    vector<int> nums;
    Solution my;
    for(int i=0;i<4;i++){
        nums.push_back(mylist[i]);
    }
    cout<<my.maxCoins(nums);
}
