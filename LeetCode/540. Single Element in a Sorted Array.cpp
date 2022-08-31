class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        for(auto x:nums){
            int ind=lower_bound(nums.begin(),nums.end(),x)-nums.begin();
            int ind2=upper_bound(nums.begin(),nums.end(),x)-nums.begin();
            int tot=ind2-ind;
            if(tot==1){
                return x;
            }
        }
        return 0;
    }
};
