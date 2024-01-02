class Solution {
public:
    int dp[1001][1001];
    int func(int cur,int lastBought,vector<int>& prices){
        if(cur>=prices.size()){
            return 0;
        }
        if(dp[cur][lastBought]!=-1){
            return dp[cur][lastBought];
        }
        int ans=1e5+5;
        if(2*(lastBought+1)>=cur+1){
            ans=0;
        }
        ans+=func(cur+1,lastBought,prices);
        int ans2=prices[cur]+func(cur+1,cur,prices);
        return dp[cur][lastBought]=min(ans,ans2);
    }
    int minimumCoins(vector<int>& prices) {
        memset(dp,-1,sizeof(dp));
        return prices[0]+func(1,0,prices);
    }
};
