class Solution {
public:
    int minArrayLength(vector<int>& nums, int k) {
        long long prod=-1;
        int cnt=0;
        for(auto x:nums){
            if(x==0){
                return 1;
            }
            if(prod==-1){
                prod=x;
                cnt++;
            }
            else{
                if(prod*x<=k){
                    prod*=x;
                }
                else{
                    prod=x;
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
