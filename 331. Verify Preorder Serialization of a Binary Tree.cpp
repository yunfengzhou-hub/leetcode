class Solution {
public:
    bool isValidSerialization(string preorder) {
        vector<string> mystack;
        int i=0,j=0;
        while(j<preorder.length()){
            while(j<preorder.length()&&preorder[j]!=',') j++;
            mystack.push_back(preorder.substr(i,j-i));
            i=j+1;
            j++;
        }
        if(mystack.size()==1) return mystack[0]=="#";
        bool found=true;
        while(found){
            found=false;
            for(i=mystack.size()-2;i>0;i--){
                if(mystack[i]=="#"&&mystack[i+1]=="#"&&mystack[i-1]!="#"){
                    found=true;
                    mystack.erase(mystack.begin()+i-1,mystack.begin()+i+1);
                    i--;
                }
            }
        }
        /*for(i=0;i<mystack.size();i++){
            cout<<mystack[i]<<' ';
        }*/
        return mystack.size()==1;
    }
};
