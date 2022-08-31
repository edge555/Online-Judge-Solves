class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>vec=nums,ans;
        sort(vec.begin(),vec.end());
        for(auto x:nums)
        {
            int ind=lower_bound(vec.begin(),vec.end(),x)-vec.begin();
            ans.push_back(ind);
        }
        return ans;
    }
};
