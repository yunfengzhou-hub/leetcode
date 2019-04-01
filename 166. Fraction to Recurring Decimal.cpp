#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string fractionToDecimal(long numerator, long denominator){
        long num1,num2=1,i;
        int sign=1;
        bool isrep=false;
        string part1,part2;
        vector<long> nums;
        if(numerator<0){
            numerator=-numerator;
            sign*=-1;
        }
        if(denominator<0){
            denominator=-denominator;
            sign*=-1;
        }
        num1=numerator/denominator;
        while(num1/10>=num2){
            num2*=10;
        }
        while(num2>=1){
            part1+=(num1/num2)+48;
            num1%=num2;
            num2/=10;
        }

        numerator%=denominator;
        //cout<<numerator<<endl;
        while(numerator>0){
            //cout<<numerator<<endl;
            /*for(i=0;i<nums.size();i++){
                cout<<nums[i]<<' ';
            }cout<<endl;*/
            nums.push_back(numerator);
            numerator*=10;
            part2+=(numerator/denominator)+48;
            numerator%=denominator;
            for(i=0;i<nums.size();i++){
                if(nums[i]==numerator){
                    part2.insert(part2.begin()+i,'(');
                    isrep=true;
                    break;
                }
            }
            if(isrep) break;
        }
        if(nums.size()>0){
            part1+='.';
            if(isrep){
                part2+=')';
            }

        }
        if(sign<0){
            part1.insert(part1.begin(),'-');
        }
        return part1+part2;
    }
};

int main(void){
    Solution my;
    cout<<my.fractionToDecimal(22,2)<<endl;
    return 0;
}
