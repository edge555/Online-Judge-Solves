class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>vec;
        for(int i=0;i<nums.size();i+=2){
            vec.push_back(nums[i+1]);
            vec.push_back(nums[i]);
        }
        return vec;
    }
};
