class Solution {
public:
    long long func(long long r){
        return (r*(r+1))>>1;
    }
    long long zeroFilledSubarray(vector<int>& nums) {
        long long ans=0,cnt=0;
        for(auto x:nums){
            if(x==0){
                cnt++;
            }
            else{
                ans+=func(cnt);
                cnt=0;
            }
        }
        ans+=func(cnt);
        return ans;
    }
};
