class Solution {
public:
    int dp[201][201];
    int func(int i,int j,int n,int m,vector<vector<int>>& grid){
        if(i>=n || j>=m){
            return 1e9;
        }
        if(i==n-1 && j==m-1){
            return grid[i][j];
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=grid[i][j]+func(i+1,j,n,m,grid);
        int ans2=grid[i][j]+func(i,j+1,n,m,grid);
        return dp[i][j]=min(ans,ans2);
    }
    int minPathSum(vector<vector<int>>& grid) {
        memset(dp,-1,sizeof(dp));
        return func(0,0,grid.size(),grid[0].size(),grid);
    }
};
