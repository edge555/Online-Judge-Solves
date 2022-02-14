class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>vec;
        for(auto x:nums){
            vec.push_back(x*x);
        }
        sort(vec.begin(),vec.end());
        return vec;
    }
};
