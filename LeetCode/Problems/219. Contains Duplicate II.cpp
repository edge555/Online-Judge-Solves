class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            int x=nums[i];
            if(mp.find(x)==mp.end())
                mp[x]=i;
            else
            {
                if(abs(i-mp[x])<=k)
                    return true;
                mp[x]=i;
            }
        }
        return false;
    }
};
