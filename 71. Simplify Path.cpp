#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string simplifyPath(string path) {
        vector<string> mystack;
        string result;
        int it=0,start;
        while(it<path.length()){
            if(path[it]!='/'){
                start=it;
                while(path[it]!='/' && it<path.length()) it++;
                /*switch(path.substr(start,it-start)){
                case ".":
                    break;
                case "..":
                    if(!mystack.empty()){
                        mystack.pop_back();
                    }
                    break;
                default:
                    mystack.push_back(path.substr(start,it-start));
                }*/
                if(path.substr(start,it-start)=="."){
                    //cout<<path.substr(start,it-start);
                }else if(path.substr(start,it-start)==".."){
                    if(!mystack.empty()){
                        mystack.pop_back();
                    }
                    //cout<<path.substr(start,it-start);
                }else{
                    mystack.push_back(path.substr(start,it-start));
                    //cout<<path.substr(start,it-start);
                }
            }
            it++;
            //cout<<it<<endl;
        }
        it=0;
        //cout<<mystack.size();
        for(it=0;it<mystack.size();it++){
            result.append(1,'/');
            //cout<<it<<endl;
            result.append(mystack.at(it));
            //cout<<it<<endl;
        }
        if(result.empty()){
            result.append(1,'/');
        }
        return result;
    }
};

int main(void){
    Solution my;
    string input("/a/e/d/b/../c//.//"),section;
    vector<string> mystack;
    cout<<my.simplifyPath(input)<<endl;
    //section=input.substr(1,5);
    //mystack.push_back(input.substr(1,5));
    //cout<<mystack[0];
    //input.append(input.substr(1,5));
    //cout<<input;
}
