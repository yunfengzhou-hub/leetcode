#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string pushDominoes(string dominoes) {
        int i=0,j,l,r;
        while(i<dominoes.length()){
            //cout<<i;
            if(dominoes[i]=='L'){
                for(j=i-1;j>=0;j--){
                    if(dominoes[j]=='.'){
                        dominoes[j]='L';
                    }else{
                        break;
                    }
                }
            }else if(dominoes[i]=='R'){
                for(j=i+1;j<dominoes.length();j++){
                    if(dominoes[j]!='.')
                        break;
                }if(j>=dominoes.length()){
                    for(l=i+1;l<j;l++){
                        dominoes[l]='R';
                    }
                    break;
                }else if(dominoes[j]=='R'){
                    for(l=i+1;l<j;l++){
                        dominoes[l]='R';
                    }
                    j--;
                }else{
                    r=i+1;
                    l=j-1;
                    while(l>r){
                        dominoes[l--]='L';
                        dominoes[r++]='R';
                    }
                }
                i=j;
            }
            i++;
        }
        return dominoes;
    }
};

int main(void){
    Solution my;
    cout<<my.pushDominoes("RR.L");
}
