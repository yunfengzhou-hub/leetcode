class Solution {
public:
    /*unsigned int trailingZeroes(unsigned int n) {
        unsigned int num2=0,num5=0,temp;
        temp=n;
        while(temp>=2){
            num2+=temp/2;
            temp/=2;
        }
        temp=n;
        while(temp>=5){
            num5+=temp/5;
            temp/=5;
        }
        return min(num2,num5);
    }
    int preimageSizeFZF(int K) {
        unsigned int start=0,finish=65535,start1,middle;
        while(finish-start>1){
            middle=(finish+start)/2;
            if(trailingZeroes(middle)<K){
                start=middle;
            }else{
                finish=middle;
            }
        }
        if(trailingZeroes(start)!=K){
            if(trailingZeroes(finish)!=K)
                return 0;
            start1=finish;
            start=finish;
        }else{
            start1=start;
        }
        finish=65535;
        while(finish-start>1){
            middle=(finish+start)/2;
            if(trailingZeroes(middle)<=K){
                start=middle;
            }else{
                finish=middle;
            }
        }
        if(trailingZeroes(finish)!=K){
            return start-start1+1;
        }else{
            return finish-start1+1;
        }
    }*/
    int preimageSizeFZF(int K) {
        if(K==0) return 5;
        unsigned long num2=0,num5=0,num10=0,numt,i,start;
        for(i=1;i<LONG_MAX;i++){
            numt=i;
            while(numt%2==0){
                num2++;
                numt/=2;
            }
            numt=i;
            while(numt%5==0){
                num5++;
                numt/=5;
            }
            numt=min(num2,num5);
            num10+=numt;
            num2-=numt;
            num5-=numt;
            if(num10>=K){
                //cout<<num10<<' '<<K<<' '<<i<<endl;
                if(num10>K){
                    //cout<<num10<<' '<<K<<' '<<i<<endl;
                    return 0;
                }else{
                    break;
                }


            }
        }
        start=i;
        i++;
        for(;i<LONG_MAX;i++){
            numt=i;
            while(numt%2==0){
                num2++;
                numt/=2;
            }
            numt=i;
            while(numt%5==0){
                num5++;
                numt/=5;
            }
            numt=min(num2,num5);
            num10+=numt;
            num2-=numt;
            num5-=numt;
            if(num10>K)
                break;

        }
        return i-start;
    }
};
