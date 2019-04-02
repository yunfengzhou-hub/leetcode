class Solution {
public:
    vector<int> findOrder(int numCourses, vector<pair<int, int>>& prerequisites) {
        /*vector<bool> added(numCourses,false);
        vector<int> indo(numCourses,0);
        vector<int> order;
        vector<vector<int>> postrequisites(numCourses,order);
        int i,j;
        for(i=0;i<prerequisites.size();i++){
            indo[prerequisites[i].first]++;
            postrequisites[prerequisites[i].second].push_back(prerequisites[i].first);
        }
        for(i=0;i<numCourses;i++){
            if(indo[i]==0){
                order.push_back(i);
                added[i]=true;
            }
        }
        i=0;
        while(i<order.size()){
            for(j=0;j<postrequisites[order[i]].size();j++){
                if(!added[postrequisites[j]]){
                    order.push_back(j);
                    added[j]=true;
                }
            }
            i++;
        }
        return order;*/
        vector<int> indo(numCourses,0),outdo(numCourses,0);
        vector<int> order;
        vector<bool> added(numCourses,false);
        bool canout=false;
        int i,j;
        for(i=0;i<prerequisites.size();i++){
            indo[prerequisites[i].first]++;
            outdo[prerequisites[i].second]++;
        }
        /*while(prerequisites.size()>0){
            for(i=0;i<prerequisites.size();i++){
                if(indo[prerequisites[i].second]==0){
                    indo[prerequisites[i].first]--;
                    outdo[prerequisites[i].second]--;
                    if(!added[prerequisites[i].second]){
                        order.push_back(prerequisites[i].second);
                        added[prerequisites[i].second]=true;
                    }
                    prerequisites.erase(prerequisites.begin()+i);
                    i--;
                }
            }
        }*/
        while(!canout){
            for(i=0;i<prerequisites.size();i++){
                if(indo[prerequisites[i].second]==0){
                    indo[prerequisites[i].first]--;
                    outdo[prerequisites[i].second]--;
                    if(!added[prerequisites[i].second]){
                        order.push_back(prerequisites[i].second);
                        added[prerequisites[i].second]=true;
                    }
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
        if(prerequisites.size()!=0){
            vector<int> none;
            return none;
        }
        for(i=0;i<numCourses;i++){
            if(!added[i]){
                order.push_back(i);
                added[i]=true;
            }
        }
        return order;
    }
};
