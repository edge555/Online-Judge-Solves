class Solution {
public:
    bool possible(long long x,long long n){
        long long r=(x*(x+1))>>1;
        return r<=n;
    }
    int arrangeCoins(int n) {
        long long lo=1,hi=pow(2,31),ans=0;
        while(lo<=hi){
            long long mid=(lo+hi)>>1;
            if(possible(mid,n)){
                ans=mid;
                lo=mid+1;
            }
            else{
                hi=mid-1;
            }
        }
        return ans;
    }
};
