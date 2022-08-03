class Solution {
public:
    int dp[51][51];
    vector<int>cost[2555];
    int func(int x,int y,int n,int m,vector<vector<int>>& grid){
        if(x>=n-1){
            return 0;
        }
        if(dp[x][y]!=-1){
            return dp[x][y];
        }
        int ans=INT_MAX;
        for(int i=0;i<m;i++){
            ans=min(ans,grid[x+1][i]+cost[grid[x][y]][i]+func(x+1,i,n,m,grid));
        }
        return dp[x][y]=ans;
    }
    int minPathCost(vector<vector<int>>& grid, vector<vector<int>>& moveCost) {
        memset(dp,-1,sizeof(dp));
        int ans=INT_MAX,n=grid.size(),m=grid[0].size();
        for(int i=0;i<moveCost.size();i++){
            for(int j=0;j<m;j++){
                cost[i].push_back(moveCost[i][j]);
            }
        }
        for(int i=0;i<m;i++){
            ans=min(ans,grid[0][i]+func(0,i,n,m,grid));
        }
        return ans;
    }
};
