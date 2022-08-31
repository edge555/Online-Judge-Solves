class Solution {
public:
    int dp[105][105],dp2[105][105];
    int func1(int ind,int last,vector<int>& nums){
        if(ind>=nums.size()){
            return 0;
        }
        if(dp[ind][last]!=-1){
            return dp[ind][last];
        }
        int x=0,y=0;
        if(last+1!=ind){
            x=nums[ind]+func1(ind+1,ind,nums);
        }
        y=func1(ind+1,last,nums);
        return dp[ind][last]=max(x,y);
    }
    int func2(int ind,int last,vector<int>& nums){
        if(ind>=nums.size()){
            return 0;
        }
        if(dp2[ind][last]!=-1){
            return dp2[ind][last];
        }
        int x=0,y=0;
        if(last+1!=ind){
            x=nums[ind]+func2(ind+1,ind,nums);
        }
        y=func2(ind+1,last,nums);
        return dp2[ind][last]=max(x,y);
    }
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        else if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        memset(dp,-1,sizeof(dp));
        memset(dp2,-1,sizeof(dp2));
        int ans=0;
        for(int i=1;i<nums.size();i++){
            ans=max(ans,nums[i]+func1(i+1,i,nums));
        }
        nums.pop_back();
        int ans2=nums[0]+func2(1,0,nums);
        return max(ans,ans2);
    }
};
