class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<0)
            return false;
        long long x=1,m=n;
        while(x<=m){
            if(x==m)
                return true;
            x*=3;
        }
        return false;
    }
};
