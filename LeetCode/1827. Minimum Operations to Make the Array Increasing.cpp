class Solution {
public:
    int minOperations(vector<int>& nums) {
        int i,last=nums[0],cnt=0;
        for(i=1;i<nums.size();i++){
            if(nums[i]<=last){
                cnt+=last-nums[i]+1;
                nums[i]=last+1;

            }
            last=nums[i];
        }
        return cnt;
    }
};
