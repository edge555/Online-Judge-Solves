class Solution {
public:
    int dp[101][101];
    int func(int x,int y,int n,int m,vector<vector<int>>& grid){
        if(x==n && y==m){
            return 1;
        }
        if(dp[x][y]!=-1){
            return dp[x][y];
        }
        if(x>n || y>m){
            return 0;
        }
        if(grid[x][y]==1){
            return 0;
        }
        int ans=func(x+1,y,n,m,grid);
        int ans2=func(x,y+1,n,m,grid);
        return dp[x][y]=ans+ans2;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        if(obstacleGrid[obstacleGrid.size()-1][obstacleGrid[0].size()-1]==1){
            return 0;
        }
        memset(dp,-1,sizeof(dp));
        return func(0,0,obstacleGrid.size()-1,obstacleGrid[0].size()-1,obstacleGrid);
    }
};
