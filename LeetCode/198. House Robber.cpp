class Solution {
public:
    int dp[105][105];
    int func(int ind,int last,vector<int>&nums){
        if(ind==nums.size()){
            return 0;
        }
        if(dp[ind][last]!=-1){
            return dp[ind][last];
        }
        int x=0,y=0;
        if(last+1!=ind){
            x+=nums[ind]+func(ind+1,ind,nums);
        }
        y+=func(ind+1,last,nums);
        return dp[ind][last]=max(x,y);

    }
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        else if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        memset(dp,-1,sizeof(dp));
        int ans=nums[0]+func(1,0,nums);
        int ans2=nums[1]+func(2,1,nums);
        return max(ans,ans2);
    }
};
