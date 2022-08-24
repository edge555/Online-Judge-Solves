class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0]=1;
        int sum=0,ans=0;
        for(auto x:nums){
            sum+=x;
            int need=sum-k;
            ans+=mp[need];
            mp[sum]++;
        }
        return ans;
    }
};
