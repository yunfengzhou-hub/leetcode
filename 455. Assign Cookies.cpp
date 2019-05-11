class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int num=0,i,temp;
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        for(i=0;i<g.size();i++){
            while(0<s.size()){
                temp=s[0];
                s.erase(s.begin(),s.begin()+1);
                if(temp>=g[i]){
                    num++;
                    break;
                }
            }
        }
        return num;
    }
};
