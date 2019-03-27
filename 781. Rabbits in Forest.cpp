#include<algorithm>
class Solution {
public:
    int numRabbits(vector<int>& answers) {
        //vector<int> myanswers;
        sort(answers.begin(),answers.end());
        int i=0,num=0,j;
        while(i<answers.size()){
            for(j=i+1;j<answers.size();j++){
                if(answers[j]!=answers[i])
                    break;
            }
            num+=((j-i-1)/(answers[i]+1)+1)*(answers[i]+1);
            i=j;
        }
        return num;
    }
};
