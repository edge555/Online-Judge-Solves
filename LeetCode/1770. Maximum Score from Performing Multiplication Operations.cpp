class Solution {
public:
    int dp[1001][1001];
    int func(int i,int j,vector<int>&nums,vector<int>&mul){
        if(j==mul.size()){
            return 0;
        }
        if(dp[i][j]!=INT_MIN){
            return dp[i][j];
        }
        int ans=mul[j]*nums[i]+func(i+1,j+1,nums,mul);
        int ans2=mul[j]*nums[nums.size()-1-j+i]+func(i,j+1,nums,mul);
        return dp[i][j]=max(ans,ans2);
    }
    int maximumScore(vector<int>& nums, vector<int>& multipliers) {
        for(int i=0;i<1001;i++){
            for(int j=0;j<1001;j++){
                dp[i][j]=INT_MIN;
            }
        }
        return func(0,0,nums,multipliers);
    }
};
