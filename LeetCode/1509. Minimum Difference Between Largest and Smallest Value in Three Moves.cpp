class Solution {
public:
    int minDifference(vector<int>& nums) {
         if(nums.size()<=4){
             return 0;
         }
        sort(nums.begin(),nums.end());
        int st=0,en=nums.size()-4;
        int ans=nums[en]-nums[st];
        while(en<nums.size()){
            st++;
            en++;
            if(en==nums.size()){
                break;
            }
            ans=min(ans,nums[en]-nums[st]);
        }
        return ans;
    }
};
