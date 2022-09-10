class Solution {
public:
    int dp[1001][101][3];
    int func(int i,int buy,int rem,vector<int>& prices){
        if(i==prices.size() || rem==0){
            return 0;
        }
        if(dp[i][rem][buy]!=-1){
            return dp[i][rem][buy];
        }
        int ans=0;
        if(buy==0){
            ans=max(func(i+1,0,rem,prices),-prices[i]+func(i+1,1,rem,prices));
        }
        else{
            ans=max(func(i+1,1,rem,prices),prices[i]+func(i+1,0,rem-1,prices));
        }
        return dp[i][rem][buy]=ans;
    }
    int maxProfit(int k, vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return func(0,0,k,prices);
    }
};
