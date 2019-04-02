class Solution {
public:
    vector<bool> taken;
    int currentday=0;
    int maxcourse=0;
    void takeCourse(int num,vector<vector<int>>& courses){
        for(int i=0;i<courses.size();i++){
            if(!taken[i]&&currentday+courses[i][0]<=courses[i][1]){
                currentday+=courses[i][0];
                taken[i]=true;
                takeCourse(num+1,courses);
                currentday-=courses[i][0];
                taken[i]=false;
            }
        }
        maxcourse=max(maxcourse,num);
    }
    int scheduleCourse(vector<vector<int>>& courses) {
        for(int i=0;i<courses.size();i++){
            taken.push_back(false);
        }
        takeCourse(0,courses);
        return maxcourse;
    }
};
