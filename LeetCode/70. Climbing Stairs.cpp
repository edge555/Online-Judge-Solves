class Solution {
public:
    int dp[50];
    int func(int n){
        if(n==0)
            return 1;
        if(dp[n]!=-1)
            return dp[n];
        int ans=0,ans2=0;
        if(n>0)
            ans+=func(n-1);
        if(n>1)
            ans2+=func(n-2);
        return dp[n]=ans+ans2;
    }
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        return func(n);
    }
};
