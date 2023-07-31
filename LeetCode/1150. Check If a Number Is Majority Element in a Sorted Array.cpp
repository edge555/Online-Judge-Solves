class Solution {
public:
    bool isMajorityElement(vector<int>& nums, int target) {
        int lb=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int ub=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        return ub-lb>nums.size()>>1;
    }
};
