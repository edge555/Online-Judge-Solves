class Solution {
public:
    int dp[101][21];
    int func(int cur,int prev,vector<vector<int>>& costs,int n,int k){
        if(cur==n){
            return 0;
        }
        if(dp[cur][prev]!=-1){
            return dp[cur][prev];
        }
        int ans=1e9;
        for(int i=0;i<k;i++){
            if(i==prev){
                continue;
            }
            ans=min(ans,costs[cur][i]+func(cur+1,i,costs,n,k));
        }
        return dp[cur][prev]=ans;
    }
    int minCostII(vector<vector<int>>& costs) {
        memset(dp,-1,sizeof(dp));
        int ans=1e9,n=costs.size(),k=costs[0].size();
        for(int i=0;i<k;i++){
            ans=min(ans,costs[0][i]+func(1,i,costs,n,k));
        }
        return ans;
    }
};
