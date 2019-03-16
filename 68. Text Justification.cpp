#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        int i,j,currentWidth=0,blankWidth,blankNum,start=0,rtop=-1;
        vector<string> result(0,"1");
        for(i=0;i<words.size();i++){
            if(currentWidth+words[i].length()>maxWidth){
                currentWidth-=1;
                blankNum=i-start-1;
                blankWidth=maxWidth-currentWidth+blankNum;
                result.push_back("");
                rtop++;
                j=0;
                //cout<<blankNum;
                if(blankNum>0){
                    for(;j<blankWidth%blankNum;j++){
                        result[rtop].append(words[start+j]);
                        result[rtop].append(blankWidth/blankNum+1,' ');
                    }
                    for(;j<blankNum;j++){
                        result[rtop].append(words[start+j]);
                        result[rtop].append(blankWidth/blankNum,' ');
                    }
                }
                result[rtop].append(words[start+j]);
                result[rtop].append(maxWidth-result[rtop].size(),' ');

                start=i;
                currentWidth=0;
            }
            currentWidth+=words[i].length()+1;
        }
        result.push_back("");
        rtop++;
        for(i=start;i<words.size();i++){
            result[rtop].append(words[i]);
            result[rtop].append(1,' ');
        }
        if(result[rtop].length()>maxWidth){
            result[rtop].erase(result[rtop].length()-1,1);
        }else{
            result[rtop].append(maxWidth-result[rtop].length(),' ');
        }
        return result;
    }
};

int main(void){
    Solution my;
    vector<string> result(0,""),words(0,"");
    int i;
    words.push_back("This");
    words.push_back("is");
    words.push_back("my");
    words.push_back("war");
    result=my.fullJustify(words,5);

    for(i=0;i<result.size();i++){
        cout<<result[i]<<endl;
    }
    return 0;
}
