class Solution {
public:
    int threeSumSmaller(vector<int>& nums, int target) {
        if(nums.size()<3){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int cnt=0;
        for(int i=0;i<nums.size()-2;i++){
           if(nums[i]+nums[i+1]+nums[i+2]>=target){
               break;
           }
           int lo=i+1,hi=nums.size()-1;
           while(lo<hi){
               if(nums[i]+nums[lo]+nums[hi]<target){
                   cnt+=hi-lo;
                   lo++;
               }
               else{
                   hi--;
               }
           }
        }
        return cnt;
    }
};
