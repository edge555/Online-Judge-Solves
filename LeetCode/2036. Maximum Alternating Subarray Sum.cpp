class Solution {
public:
    long long dp[100005][2];
    long long func(int ind,int cur,vector<int>&nums){
        if(ind==nums.size()){
            return 0;
        }
        if(dp[ind][cur]!=-1){
            return dp[ind][cur];
        }
        long long ans=0;
        if(cur==0){
            ans=nums[ind]+func(ind+1,1,nums);
        }
        else{
            ans=-1*nums[ind]+func(ind+1,0,nums);
        }
        return dp[ind][cur]=max(ans,0LL);
    }
    long long maximumAlternatingSubarraySum(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        memset(dp,-1,sizeof(dp));
        long long ans=0;
        for(int i=0;i<nums.size();i++){
            ans=max(ans,nums[i]+func(i+1,1,nums));
        }
        return ans;
    }
};
