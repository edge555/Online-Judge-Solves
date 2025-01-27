class Solution {
public:
    int minMoves2(vector<int>& nums){
        sort(nums.begin(),nums.end());
        int mid=nums[nums.size()/2];
        int cnt=0;
        for(auto x:nums){
            cnt+=abs(x-mid);
        }
        return cnt;
    }
};
