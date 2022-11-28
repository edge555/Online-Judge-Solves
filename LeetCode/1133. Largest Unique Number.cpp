class Solution {
public:
    int largestUniqueNumber(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        int mx=-1;
        for(auto x:mp){
            if(x.second==1){
                mx=max(mx,x.first);
            }
        }
        return mx;
    }
};
