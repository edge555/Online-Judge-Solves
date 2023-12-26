class Solution {
public:
    const int MOD=1e9+7;
    int dp[31][901];
    int mod2(int &a,int b){
        return ((a%MOD)+(b%MOD))%MOD;
    }
    int func(int taken,int curSum,int n,int k,int target){
        if(taken>=n){
            if(curSum==target){
                return 1;
            }
            return 0;
        }
        if(dp[taken][curSum]!=-1){
            return dp[taken][curSum];
        }
        int sum=0;
        for(int i=1;i<=k;i++){
            if(curSum+i<=target){
                sum=mod2(sum,func(taken+1,curSum+i,n,k,target));
            }
        }
        return dp[taken][curSum]=sum%MOD;
    }
    int numRollsToTarget(int n, int k, int target) {
        if(target>900){
            return 0;
        }
        memset(dp,-1,sizeof(dp));
        int ans=0;
        for(int i=1;i<=k;i++){
            ans=mod2(ans,func(1,i,n,k,target));
        }
        return ans;
    }
};
