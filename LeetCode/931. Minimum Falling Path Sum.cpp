class Solution {
public:
    int dp[101][101];
    int func(int i,int j,vector<vector<int>>&grid){
        if(i>=grid.size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(j==0 || j==grid.size()-1){
            if(j==0){
                int ans=0,ans2=0;
                ans=grid[i][j]+func(i+1,j,grid);
                ans2=grid[i][j]+func(i+1,j+1,grid);
                return dp[i][j]=min(ans,ans2);
            }
            else{
                int ans=0,ans2=0;
                ans=grid[i][j]+func(i+1,j,grid);
                ans2=grid[i][j]+func(i+1,j-1,grid);
                return dp[i][j]=min(ans,ans2);
            }
        }
        else{
            int ans=0,ans2=0,ans3=0;
            ans=grid[i][j]+func(i+1,j,grid);
            ans2=grid[i][j]+func(i+1,j-1,grid);
            ans3=grid[i][j]+func(i+1,j+1,grid);
            return dp[i][j]=min(ans,min(ans2,ans3));
        }
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        memset(dp,-1,sizeof(dp));
        int ans=INT_MAX;
        for(int i=0;i<matrix.size();i++){
            ans=min(ans,func(0,i,matrix));
        }
        return ans;
    }
};
