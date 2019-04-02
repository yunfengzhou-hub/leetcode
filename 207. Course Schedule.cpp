#include <vector>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        vector<int> indo(numCourses,0),outdo(numCourses,0);
        int i,j;
        bool canout=false;
        for(i=0;i<prerequisites.size();i++){
            indo[prerequisites[i].first]++;
            outdo[prerequisites[i].second]++;
        }
        while(!canout){
            for(i=0;i<prerequisites.size();i++){
                if(indo[prerequisites[i].second]==0){
                    indo[prerequisites[i].first]--;
                    outdo[prerequisites[i].second]--;
                    prerequisites.erase(prerequisites.begin()+i);
                    i--;
                }
            }
            canout=true;
            for(i=0;i<numCourses;i++){
                if(indo[i]==0&&outdo[i]!=0){
                    canout=false;
                    break;
                }
            }
        }
        return prerequisites.size()==0;
    }
};

int main(void){
    int numCourses=2;

}
