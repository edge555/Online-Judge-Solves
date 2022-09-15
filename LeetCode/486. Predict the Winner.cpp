class Solution {
public:
    int dp[21][21];
    int func(int i,int j,vector<int>&nums){
        if(i>j){
            return 0;
        }
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        int a=nums[i]+min(func(i+2,j,nums),func(i+1,j-1,nums));
        int b=nums[j]+min(func(i,j-2,nums),func(i+1,j-1,nums));
        return dp[i][j]=max(a,b);
    }
    bool PredictTheWinner(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int sum=0;
        for(auto x:nums){
            sum+=x;
        }
        int r=func(0,nums.size()-1,nums);
        return sum-2*r<=0;
    }
};
