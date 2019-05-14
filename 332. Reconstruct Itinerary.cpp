bool cmp(vector<string> str1,vector<string> str2){
    if(str1[0]!=str2[0]) return str1[0].compare(str2[0])<0;
    return str1[1].compare(str2[1])<0;
}

class Solution {
public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        sort(tickets.begin(),tickets.end(),cmp);
        vector<string> result,finish;
        string temp;
        int i,j,counter;
        bool found=true,found2;
        result.push_back("JFK");




        found=true;
        while(found){

            found2=true;
            while(found2){
                found2=false;
                for(i=0;i<tickets.size();i++){
                    counter=0;
                    for(j=0;j<tickets.size();j++){
                        if(tickets[i][1]==tickets[j][0]){
                            counter++;
                        }
                    }
                    if(counter<1){
                        found2=true;
                        finish.push_back(tickets[i][1]);
                        tickets.erase(tickets.begin()+i,tickets.begin()+i+1);
                        break;
                    }
                }
            }

            found=false;
            temp=result[result.size()-1];
            for(i=0;i<tickets.size();i++){
                if(tickets[i][0]==temp){
                    found=true;
                    result.push_back(tickets[i][1]);
                    tickets.erase(tickets.begin()+i,tickets.begin()+i+1);
                    break;
                }
            }
        }
        for(i=finish.size()-1;i>=0;i--){
            result.push_back(finish[i]);
        }

        return result;
    }
};
