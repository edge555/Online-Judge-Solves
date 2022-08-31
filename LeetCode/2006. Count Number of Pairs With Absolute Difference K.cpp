class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        int cnt=0;
        for(int i=0;i<nums.size()-1;i++){
            for(int j=i+1;j<nums.size();j++){
                cnt+=abs(nums[j]-nums[i])==k;
            }
        }
        return cnt;
    }
};
