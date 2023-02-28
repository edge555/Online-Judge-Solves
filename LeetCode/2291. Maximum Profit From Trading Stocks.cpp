class Solution {
public:
    int dp[1005][1005];
    int func(int ind,int rem, vector<int>& present, vector<int>& future){
        if(ind>=present.size()){
            return 0;
        }
        if(dp[ind][rem]!=-1){
            return dp[ind][rem];
        }
        int ans=0,ans2=0;
        if(rem-present[ind]>=0){
            ans=future[ind]-present[ind]+func(ind+1,rem-present[ind],present,future);
        }
        ans2=func(ind+1,rem,present,future);
        return dp[ind][rem]=max(ans,ans2);
    }
    int maximumProfit(vector<int>& present, vector<int>& future, int budget) {
        memset(dp,-1,sizeof(dp));
        return func(0,budget,present,future);
    }
};
