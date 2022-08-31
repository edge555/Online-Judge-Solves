class Solution {
public:
    int dp[71][4905];
    int func(int i,int sum,vector<vector<int>>&mat,int target,int& n,int& m){
        if(i==n){
            return abs(sum-target);
        }
        if(dp[i][sum]!=-1){
            return dp[i][sum];
        }
        int ans=INT_MAX;
        for(int j=0;j<m;j++){
            ans=min(ans,func(i+1,sum+mat[i][j],mat,target,n,m));
        }
        return dp[i][sum]=ans;
    }
    int minimizeTheDifference(vector<vector<int>>& mat, int target) {
        memset(dp,-1,sizeof(dp));
        int n=mat.size(),m=mat[0].size();
        return func(0,0,mat,target,n,m);
    }
};
