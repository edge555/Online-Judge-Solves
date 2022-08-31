class Solution {
public:
    int trailingZeroes(long long int n) {
        int cnt=0;
        long long int now=5;
        while(now<=n)
        {
            cnt+=n/now;
            now*=5;
        }
        return cnt;
    }
};
