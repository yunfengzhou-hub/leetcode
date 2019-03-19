class Solution {
public:
    int candy(vector<int>& ratings) {
        int head=1,tail=0,i;
        vector<int> candies(ratings.size(),1);
        if(ratings.size()<2){
            if(ratings.size()<1)
                return 0;
            return 1;
        }
        if(ratings[0]<ratings[1])
            candies[0]=1;
        while(head<ratings.size()){
            while(head<ratings.size()&&ratings[head]<ratings[head-1])
                head++;
            for(i=head-1;i>tail;i++)
                candies[i]=head-i;
            candies[tail]=max(candies[tail],head=tail);
            while(head<ratings.size()&&ratings[head]==ratings[head-1])
                head++;
            while(head<ratings.size()&&ratings[head]>ratings[head-1]){
                candies[head]=candies[head-1]+1;
                head++;
            }
            while(head<ratings.size()&&ratings[head]==ratings[head-1])
                head++;
            tail=head;
        }
        for(i=candies.size()-1;i>0;i--){
            candies[i-1]+=candies[i];
        }
        return candies[0];
    }
};

