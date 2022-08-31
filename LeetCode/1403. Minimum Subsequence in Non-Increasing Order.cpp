class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum=0;
        for(auto x:nums){
            sum+=x;
        }
        vector<int>vec;
        int temp=0;
        for(int i=nums.size()-1;i>=0;i--){
            temp+=nums[i];
            sum-=nums[i];
            vec.push_back(nums[i]);
            if(temp>sum){
                break;
            }
        }
        return vec;
    }
};
