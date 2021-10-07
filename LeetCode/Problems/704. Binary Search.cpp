class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ind=upper_bound(nums.begin(),nums.end(),target)-nums.begin();
        if(ind==0){
            return -1;
        }
        if(nums[ind-1]!=target){
            return -1;
        }
        return ind-1;
    }
};
