class Solution {
public:
    int dp[201][201];
    int func(int i,int j,vector<vector<int>>& vec){
        if(i>=vec.size() || j>=vec[i].size()){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int ans=vec[i][j]+func(i+1,j,vec);
        int ans2=vec[i][j]+func(i+1,j+1,vec);
        return dp[i][j]=min(ans,ans2);
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        memset(dp,-1,sizeof(dp));
        return func(0,0,triangle);
    }
};
