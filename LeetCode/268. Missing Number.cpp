class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ara[nums.size()+2];
        memset(ara,0,sizeof(ara));
        for(auto x:nums){
            ara[x]++;
        }
        for(int i=0;;i++){
            if(!ara[i]){
                return i;
            }
        }
        return -1;
    }
};
