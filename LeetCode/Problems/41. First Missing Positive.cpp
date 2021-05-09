class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int i,freq[310];
        memset(freq,0,sizeof(freq));
        for(i=0;i<nums.size();i++){
            if(nums[i]>=1 && nums[i]<=305){
                freq[nums[i]]++;
            }
        }
        int ans=0;
        for(i=1;i<=305;i++){
            if(!freq[i]){
                ans=i;
                break;
            }
        }
        return ans;
    }
};
