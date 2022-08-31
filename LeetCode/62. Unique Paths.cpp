class Solution {
public:
    int dp[101][101];
    int func(int x,int y,int n,int m){
        if(x==n && y==m){
            return 1;
        }
        if(x>n || y>m){
            return 0;
        }
        if(dp[x][y]!=-1){
            return dp[x][y];
        }
        int ans=func(x+1,y,n,m);
        int ans2=func(x,y+1,n,m);
        return dp[x][y]=ans+ans2;
    }
    int uniquePaths(int m, int n) {
        memset(dp,-1,sizeof(dp));
        return func(0,0,m-1,n-1);
    }
};
