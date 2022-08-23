class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        vector<int>vec;
        for(auto it:mp){
            if(it.second>nums.size()/3){
                vec.push_back(it.first);
            }
        }
        return vec;
    }
};
