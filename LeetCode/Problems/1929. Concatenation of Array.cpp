class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>vec=nums;
        vec.insert(vec.end(),nums.begin(),nums.end());
        return vec;
    }
};
