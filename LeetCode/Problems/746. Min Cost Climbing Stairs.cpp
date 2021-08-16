class Solution {
public:
    int dp[1005],n;
    vector<int>vec;
    int func(int ind)
    {
        if(ind>=n)
            return 0;
        if(dp[ind]!=-1)
            return dp[ind];
        int ans=0,ans2=0;
        ans+=vec[ind]+func(ind+1);
        ans2+=vec[ind]+func(ind+2);
        return dp[ind]=min(ans,ans2);
    }
    int minCostClimbingStairs(vector<int>& cost) {
        memset(dp,-1,sizeof(dp));
        vec=cost;
        n=cost.size();
        int ans=func(0);
        int ans1=func(1);
        return min(ans,ans1);
    }
};
