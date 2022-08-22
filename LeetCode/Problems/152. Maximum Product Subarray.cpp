class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int minprod=nums[0],maxprod=nums[0],ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int temp=max(nums[i],max(nums[i]*maxprod,nums[i]*minprod));
            minprod=min(nums[i],min(nums[i]*maxprod,nums[i]*minprod));
            maxprod=temp;
            ans=max(ans,max(minprod,maxprod));
        }
        return ans;
    }
};
