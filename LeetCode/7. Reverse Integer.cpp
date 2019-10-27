class Solution {
public:
    int reverse(long long int x) {
        bool chk=false;
        if(x<0)
        {
            chk=true;
            x*=-1;
        }
        long long int k=0;
        while(x)
        {
            k*=10;
            k+=x%10;
            x/=10;
        }
        if(chk)
            k*=-1;
        long long int y=pow(2,31);
        if(k<(y*-1) || k>=y)
            k=0;
        return int(k);
    }
};
