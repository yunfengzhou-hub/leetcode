#include <string>

using namespace std;
/*
class Solution {
public:
    string addBinary(string a, string b) {
        int a1=0,b1=0,c1,i;
        string c="";
        for(i=0;i<a.length();i++){
            a1*=2;
            a1+=a[i]-48;
        }
        for(i=0;i<b.length();i++){
            b1*=2;
            b1+=a[i]-48;
        }
        c1=a1+b1;
        i=1;
        while(c1>1){
            i*=2;
            c1/=2;
        }
        c1=a1+b1;
        while(i>1){
            c.append(1,(c1/i==1)?'1':'0');
            c1/=i;
            i/=2;
        }
        c.append(1,(c1/i==1)?'1':'0');
        return c;
    }
};
*/

class Solution {
public:
    string addBinary(string a, string b) {
        string ar="",br="",cr="",c="";
        int i,carry=0;
        for(i=a.length()-1;i>=0;i--){
            ar.append(1,a[i]);
        }
        for(i=b.length()-1;i>=0;i--){
            br.append(1,b[i]);
        }
        if(a.length()>b.length())
            br.append(a.length()-b.length(),'0');
        else if(a.length()<b.length())
            ar.append(b.length()-a.length(),'0');
        for(i=0;i<ar.length();i++){
            carry=(ar[i]-48)+(br[i]-48)+carry;
            cr.append(1,(carry%2==1?'1':'0'));
            carry/=2;
        }
        if(carry==1)
            cr.append(1,'1');
        for(i=cr.length()-1;i>=0;i--){
            c.append(1,cr[i]);
        }
        return c;
    }
};

int main(void){
    return 0;
}
