class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        unordered_map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        int cnt=0;
        for(auto x:nums){
            cnt+=mp[x]>0 && mp[x+diff]>0 && mp[x+2*diff]>0;
            mp[x]--;
        }
        return cnt;
    }
};
