#include <string>
#include <iostream>

using namespace std;

class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.empty())
            return 0;
        if(s.length()<2){
            if(s.at(0)==' '){
                return 0;
            }
            return 1;
        }
        int i,j;
        for(i=s.length()-1;i>=0;i--){
            if(s.at(i)!=' ')
                break;
        }
        for(j=i-1;j>=0;j--){
            if(s.at(j)==' ')
                break;
        }
        return i-j;
    }
};

int main(void){
    string s="Hello";
    int s1;
    Solution my;
    s1=my.lengthOfLastWord(s);
    std::cout<<s1<<"\n";
    return 0;
}
