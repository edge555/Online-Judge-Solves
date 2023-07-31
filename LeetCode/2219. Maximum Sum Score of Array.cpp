class Solution {
public:
    long long maximumSumScore(vector<int>& nums) {
        long long sum=0;
        for(auto x:nums){
            sum+=x;
        }
        long long ans=-1e18,temp=0;
        for(int i=0;i<nums.size();i++){
            temp+=nums[i];
            long long leftSum=temp,rightSum=sum-leftSum+nums[i];
            ans=max(ans,max(leftSum,rightSum));
        }
        return ans;
    }
};
