class Solution {
public:
    int dp[10005];
    int func(int ind,vector<int>&nums){
        if(ind>=nums.size()-1){
            return 1;
        }
        if(dp[ind]!=-1){
            return dp[ind];
        }
        int f=0,mx=nums[ind];
        for(int j=0;j<mx;j++){
            f=f || func(ind+j+1,nums);
        }
        return dp[ind]=f;
    }
    bool canJump(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return func(0,nums);
    }
};
