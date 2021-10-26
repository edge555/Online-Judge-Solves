class Solution {
public:
    int arraySign(vector<int>& nums) {
        int cnt=0;
        for(auto x:nums){
            if(x<0){
                cnt++;
            }
            else if(x==0){
                return 0;
            }
        }
        if(cnt&1){
            return -1;
        }
        return 1;
    }
};
