class Solution {
public:
    int countOrders(int n) {
        int MOD=1e9+7;
        long long ans=1;
        for(int i=2;i<=n;i++){
            int rem=2*i-1;
            ans=(((i*rem)%MOD) * (ans%MOD))%MOD;
        }
        return ans;
    }
};
