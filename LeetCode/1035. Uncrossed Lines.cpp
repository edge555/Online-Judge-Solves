class Solution {
public:
    int func(vector<int> &v1,vector<int> &v2,int i,int j,int &m,int &n,vector<vector<int>> &dp){
        if(i==n || j==m){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(v1[i]==v2[j]){
            dp[i][j]=func(v1,v2,i+1,j+1,m,n,dp)+1;
        }
        else{
            dp[i][j]=max({func(v1,v2,i+1,j,m,n,dp),func(v1,v2,i,j+1,m,n,dp),dp[i][j]});
        }
        return dp[i][j];
    }
    int maxUncrossedLines(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size(),m=nums2.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        return func(nums1,nums2,0,0,m,n,dp);
    }
};
