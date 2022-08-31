class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>vec;
        int i,sum=0;
        for(i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            vec.push_back(sum);
        }
        return vec;
    }
};
