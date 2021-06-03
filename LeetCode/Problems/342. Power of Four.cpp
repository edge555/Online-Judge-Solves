class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<0)
            return false;
        long long x=1,m=n;
        while(x<=m){
            if(x==m)
                return true;
            x*=4;
        }
        return false;
    }
};
