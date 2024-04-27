class Solution {
public:
    long long minOperationsToMakeMedianK(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int med=nums[n/2];
        long long cnt=0;
        if(k==med){
            return 0;
        }
        else if(k>med){
            for(int i=n/2;i<n && nums[i]<k;i++){
                cnt+=k-nums[i];
            }
        }
        else {
            for(int i=n/2;i>=0 && nums[i]>k;i--){
                cnt+=nums[i]-k;
            }
        }
        return cnt;
    }
};
