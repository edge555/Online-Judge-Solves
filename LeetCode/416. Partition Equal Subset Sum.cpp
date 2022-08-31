class Solution {
public:
    int dp[201][10001];
    int func(int ind,int remsum,vector<int>&nums){
        if(ind>=nums.size()){
            if(remsum==0){
                return 1;
            }
            else{
                return 0;
            }
        }
        if(dp[ind][remsum]!=-1){
            return dp[ind][remsum];
        }
        int ans=0,ans2=0;
        if(remsum-nums[ind]>=0){
            ans=func(ind+1,remsum-nums[ind],nums);
        }
        ans2=func(ind+1,remsum,nums);
        return dp[ind][remsum]=max(ans,ans2);
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        for(auto x:nums){
            sum+=x;
        }
        if(sum&1){
            return false;
        }
        memset(dp,-1,sizeof(dp));
        return func(0,sum/2,nums);
    }
};
