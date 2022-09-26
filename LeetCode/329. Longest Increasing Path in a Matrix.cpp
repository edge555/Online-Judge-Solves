class Solution {
public:
    int dp[201][201];
    int dx[4]={0,0,1,-1};
    int dy[4]={1,-1,0,0};
    bool valid(int x,int y,int &n,int &m){
        return x>=0 && x<n && y>=0 && y<m;
    }
    int dfs(int i,int j,int n,int m,vector<vector<int>>& matrix){
        if(i<0 || i>=n || j<0 || j>=m){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=1;
        for(int k=0;k<4;k++){
            int ii=i+dx[k];
            int jj=j+dy[k];
            if(valid(ii,jj,n,m)){
                if(matrix[i][j]<matrix[ii][jj] && dp[i][j]<dp[ii][jj]+1){
                    ans=max(ans,dfs(ii,jj,n,m,matrix)+1);
                }
            }
        }
        return dp[i][j]=ans;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        memset(dp,-1,sizeof(dp));
        int n=matrix.size(),m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dfs(i,j,n,m,matrix);
            }
        }
        int ans=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                ans=max(ans,dp[i][j]);
            }
        }
        return ans;
    }
};
