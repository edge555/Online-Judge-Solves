class Solution {
public:
    int dp[201][201];
    int func(int i,int j,vector<vector<int>>&grid){
        if(i>=grid.size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=INT_MAX;
        for(int k=0;k<grid.size();k++){
            if(j==k){
                continue;
            }
            ans=min(ans,grid[i][k]+func(i+1,k,grid));
        }
        return dp[i][j]=ans;
    }
    int minFallingPathSum(vector<vector<int>>& grid) {
        if(grid.size()==1){
            return grid[0][0];
        }
        memset(dp,-1,sizeof(dp));
        int ans=INT_MAX;
        for(int i=0;i<grid.size();i++){
            ans=min(ans,func(0,i,grid));
        }
        return ans;
    }
};
