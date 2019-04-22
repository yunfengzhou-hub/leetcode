bool cmp(pair<int,int>a,pair<int,int>b)
{
    if(a.first>b.first) return true;
    if(a.first==b.first&&a.second < b.second)
        return true;
    return false;
}

class Solution {
public:
    vector<pair<int, int>> reconstructQueue(vector<pair<int, int>>& people) {
        vector<pair<int, int>> tallest,result;
        int maxheight,i;
        sort(people.begin(), people.end(), cmp);

        while(people.size()>0){
            maxheight=people[0].first;
            /*for(i=1;i<people.size();i++){
                if(maxheight<people[i].first)
                    maxheight=people[i].first;
            }*/
            while(people.size()>0){
                if(maxheight!=people[0].first)
                    break;
                tallest.push_back(people[0]);
                people.erase(people.begin(),people.begin()+1);
            }
            for(i=0;i<tallest.size();i++){
                result.insert(result.begin()+tallest[i].second,tallest[i]);
            }
            tallest.erase(tallest.begin(),tallest.end());
        }
        return result;
    }
};
