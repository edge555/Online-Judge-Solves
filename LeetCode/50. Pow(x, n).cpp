class Solution {
public:
    double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        if(n<0){
            n=abs(n);
            x=1/x;
        }
        if(n&1){
            return x*myPow(x*x,n>>1);
        }
        else{
            return myPow(x*x,n>>1);
        }
    }
};
