#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    int maxProduct(vector<string>& words) {
        vector<uint32_t> mask(words.size(),0);
        int i,j,result=0;
        for(i=0;i<words.size();i++){
            for(j=0;j<words[i].length();j++){
                mask[i]|=(1<<(words[i][j]-'a'));
            }
        }
        for(i=0;i<words.size();i++){
            for(j=i+1;j<words.size();j++){
                if(((mask[i]&mask[j])==0)&&(words[i].length()*words[j].length()>result)){
                    result=words[i].length()*words[j].length();
                }
            }
        }
        return result;
    }
};

int main(void){
}
