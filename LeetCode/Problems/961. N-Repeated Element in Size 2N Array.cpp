class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0,j=(nums.size()/2)-1;
        while(j<nums.size())
        {
            if(nums[i]==nums[j])
                return nums[i];
            i++;
            j++;
        }
        return 0;
    }
};
