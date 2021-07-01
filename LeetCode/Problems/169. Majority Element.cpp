class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        for(auto it:mp){
            if(it.second>nums.size()/2){
                return it.first;
            }
        }
        return 0;
    }
};
