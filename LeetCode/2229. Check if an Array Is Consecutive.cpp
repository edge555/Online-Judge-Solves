class Solution {
public:
    bool isConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cur=nums[0];
        for(auto x:nums){
            if(cur==x){
                cur++;
            }
            else{
                return false;
            }
        }
        return cur==nums[0]+nums.size();
    }
};
