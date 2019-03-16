#include <vector>

using namespace std;

class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int i,j,tank;
        for(i=0;i<gas.size();i++){
            gas[i]-=cost[i];
        }
        i=0;
        while(i<gas.size()){
            if(gas[i]>=0){
                tank=0;
                for(j=0;j<gas.size();j++){
                    tank+=gas[(i+j)%gas.size()];
                    if(tank<0)   break;
                }
                if(tank>=0) return i;
                while(i<gas.size()&&gas[i]>=0)    i++;
            }else{
                i++;
            }
        }
        return -1;
    }
};
