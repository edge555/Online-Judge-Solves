class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans=0,sum=0;
        for(auto x:nums){
            sum*=x;
            sum+=x;
            ans=max(ans,sum);
        }
        return ans;
    }
};
