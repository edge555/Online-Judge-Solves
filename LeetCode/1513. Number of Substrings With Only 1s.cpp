class Solution {
public:
    long long func(long long n){
        return (n*(n+1))>>1;
    }
    int numSub(string s) {
        int mod=1e9+7;
        long long ans=0,cnt=0;
        for(auto c:s){
            if(c=='0'){
                ans+=func(cnt)%mod;
                cnt=0;
            }
            else{
                cnt++;
            }
        }
        ans+=func(cnt)%mod;
        ans%=mod;
        return ans;
    }
};
