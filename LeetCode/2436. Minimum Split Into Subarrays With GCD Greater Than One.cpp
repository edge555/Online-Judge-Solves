class Solution {
public:
    int minimumSplits(vector<int>& nums) {
        int cnt=1,gcd=nums[0];
        for(auto x:nums){
            int r=__gcd(gcd,x);
            if(r>1){
                gcd=r;
            }
            else{
                cnt++;
                gcd=x;
            }
        }
        return cnt;
    }
};
