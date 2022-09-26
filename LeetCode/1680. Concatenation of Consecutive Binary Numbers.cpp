class Solution {
public:
    const int mod=1e9+7;
    int concatenatedBinary(int n){
        long long ans=0;
        int len=0;
        for(int i=1;i<=n;i++){
            if((i&(i-1))==0){
                len++;
            }
            ans=((ans<<len)%mod+i)%mod;
        }
        return ans;
    }
};
