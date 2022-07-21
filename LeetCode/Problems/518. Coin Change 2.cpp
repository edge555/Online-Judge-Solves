class Solution {
public:
    int dp[301][5001];
    int func(int ind,int tot,vector<int>&coins){
        if(tot==0){
            return 1;
        }
        if(ind<=0 || tot<0){
            return 0;
        }
        if(dp[ind][tot]!=-1){
            return dp[ind][tot];
        }
        int ans=0,ans2=0;
        ans=func(ind-1,tot,coins);
        ans2=func(ind,tot-coins[ind-1],coins);
        return dp[ind][tot]=ans+ans2;
    }
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        return func(coins.size(),amount,coins);
    }
};
