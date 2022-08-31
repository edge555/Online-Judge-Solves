class Solution {
public:
    int findGCD(vector<int>& nums) {
        int mn=2000,mx=-1;
        for(auto x:nums)
        {
            mn=min(mn,x);
            mx=max(mx,x);
        }
        return __gcd(mn,mx);
    }
};
