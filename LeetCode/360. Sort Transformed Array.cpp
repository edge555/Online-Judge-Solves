class Solution {
public:
    vector<int> sortTransformedArray(vector<int>& nums, int a, int b, int c) {
        vector<int>vec;
        for(auto x:nums){
            vec.push_back(a*x*x+b*x+c);
        }
        sort(vec.begin(),vec.end());
        return vec;
    }
};
