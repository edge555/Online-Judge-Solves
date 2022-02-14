class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int mn=1e9,mx;
        for(auto x:nums){
            if(mn==1e9){
                mn=x+k;
            }
            mx=x-k;
        }
        return max(0,mx-mn);
    }
};
