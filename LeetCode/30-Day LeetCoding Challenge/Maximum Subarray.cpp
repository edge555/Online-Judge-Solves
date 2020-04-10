class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int i,mx=nums[0],cur=nums[0];
        for(i=1;i<nums.size();i++)
        {
            cur=max(nums[i],cur+nums[i]);
            mx=max(mx,cur);
        }
        return mx;
    }
};
