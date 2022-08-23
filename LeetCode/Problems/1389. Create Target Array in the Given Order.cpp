class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>vec;
        for(int i=0;i<nums.size();i++){
            vec.insert(vec.begin()+index[i],nums[i]);
        }
        return vec;
    }
};
