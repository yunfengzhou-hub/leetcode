class Solution {
public:
    int monotoneIncreasingDigits(int N) {
        vector<int> temp;
        int i,result=0;
        while(N>0){
            temp.push_back(N%10);
            N/=10;
        }
        for(i=temp.size()-1;i>0;i--){
            if(temp[i]>temp[i-1]){
                while(i<temp.size()-1&&temp[i]>=temp[i-1]) i++;
                if(temp[i]<temp[i-1]) i--;
                temp[i]-=1;
                while(i>0)
                    temp[--i]=9;
                break;
            }
        }
        for(i=temp.size()-1;i>=0;i--){
            result*=10;
            result+=temp[i];
        }
        return result;
    }
};
