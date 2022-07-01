class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int last=-1,cnt=0;
        for(auto x:nums){
            if(last==-1){
                last=x;
                cnt++;
            }
            else{
                if(x-last>k){
                    last=x;
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
