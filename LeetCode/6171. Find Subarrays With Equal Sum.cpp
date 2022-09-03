class Solution {
public:
    bool findSubarrays(vector<int>& nums) {
        if(nums.size()==2){
            return false;
        }
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            int sum=nums[i]+nums[i+1];
            for(int j=0;j<n-1;j++){
                if(i==j){
                    continue;
                }
                int sum2=nums[j]+nums[j+1];
                if(sum==sum2){
                    return true;
                }
            }
        }
        return false;
    }
};
