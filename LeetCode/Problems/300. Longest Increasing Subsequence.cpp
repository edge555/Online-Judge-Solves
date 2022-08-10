class Solution {
public:
    int dp[2505][2505];
    int func(int ind,int prev,vector<int>&nums){
        if(ind==nums.size()){
            return 0;
        }
        if(dp[ind][prev+1]!=-1){
            return dp[ind][prev+1];
        }
        int ans=func(ind+1,prev,nums);
        int ans2=0;
        if(prev==-1 || nums[ind]>nums[prev]){
            ans2=1+func(ind+1,ind,nums);
        }
        return dp[ind][prev+1]=max(ans,ans2);
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        return func(0,-1,nums);
    }
};
