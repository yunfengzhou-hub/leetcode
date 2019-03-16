#include <iostream>

using namespace std;

class Solution {
public:
    int mySqrt(int x) {
        long start,finish,middle;
        start=1;
        finish=x;
        while(finish-start>1){
            middle=(start+finish)/2;
            if(middle*middle<x){
                start=middle;
            }else{
                finish=middle;
            }
            //cout<<start<<finish;
        }

        if(finish*finish<=x){
            return finish;
        }else{
            return start;
        }
    }
};

int main(void){
    cout<<1/2<<3/2;
    return 0;
}
