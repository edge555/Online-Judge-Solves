class Solution {
public:
    int findMin(vector<int>& nums) {
        int mn=INT_MAX;
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                mn=nums[i];
            }
        }
        return min(nums[0],mn);
    }
};
