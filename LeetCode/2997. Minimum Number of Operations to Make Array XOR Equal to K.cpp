class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int x=0;
        for(auto n:nums){
            x^=n;
        }
        x^=k;
        int cnt=0;
        while(x>0){
            cnt++;
            x&=(x-1);

        }
        return cnt;
    }
};
