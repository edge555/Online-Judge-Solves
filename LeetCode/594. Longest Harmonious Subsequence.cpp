class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>mp;
        for(auto x:nums){
            mp[x]++;
        }
        int ans=0;
        for(auto it:mp){
            if(mp.find(it.first+1)!=mp.end()){
                ans=max(ans,it.second+mp[it.first+1]);
            }
        }
        return ans;
    }
};
