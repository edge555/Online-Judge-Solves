class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        long long i,ans=0;
        for(i=0;i<nums.size();i+=2){
            ans+=nums[i];
        }
        return ans;
    }
};
