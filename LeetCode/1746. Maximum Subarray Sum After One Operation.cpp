class Solution {
public:
    int dp[100005][2];
    int result=0;
    int func(int ind,int taken,vector<int>& nums){
        if(ind==nums.size()){
            return 0;
        }
        if(dp[ind][taken]!=-1){
            return dp[ind][taken];
        }
        int ans=nums[ind]+func(ind+1,taken,nums);
        int ans2=0;
        if(!taken){
            ans2=max(nums[ind]*nums[ind],nums[ind]*nums[ind]+func(ind+1,1,nums));
        }
        result=max(result,max(ans,ans2));
        return dp[ind][taken]=max(ans,ans2);
    }
    int maxSumAfterOperation(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        func(0,0,nums);
        return result;
    }
};
