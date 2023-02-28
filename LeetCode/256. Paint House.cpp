class Solution {
public:
    int dp[105][3];
    int func(int ind,int prev,vector<vector<int>>& costs){
        if(ind==costs.size()){
            return 0;
        }
        if(dp[ind][prev]!=-1){
            return dp[ind][prev];
        }
        int ans=1e9,ans2=1e9;
        if(prev==0){
            ans=costs[ind][1]+func(ind+1,1,costs);
            ans2=costs[ind][2]+func(ind+1,2,costs);
        }
        else if(prev==1){
            ans=costs[ind][0]+func(ind+1,0,costs);
            ans2=costs[ind][2]+func(ind+1,2,costs);
        }
        else{
            ans=costs[ind][0]+func(ind+1,0,costs);
            ans2=costs[ind][1]+func(ind+1,1,costs);
        }
        return dp[ind][prev]=min(ans,ans2);
    }
    int minCost(vector<vector<int>>& costs) {
        memset(dp,-1,sizeof(dp));
        int ans=costs[0][0]+func(1,0,costs);
        int ans2=costs[0][1]+func(1,1,costs);
        int ans3=costs[0][2]+func(1,2,costs);
        return min(ans,min(ans2,ans3));
    }
};
